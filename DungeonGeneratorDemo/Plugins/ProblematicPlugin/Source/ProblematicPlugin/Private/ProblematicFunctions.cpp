// Fill out your copyright notice in the Description page of Project Settings.


#include "ProblematicFunctions.h"

#include "BlueprintActionDatabase.h"
#include "DelaunayTriangle.h"
#include "Dungeon.h"
#include "EdgePathway.h"
#include "MatrixTypes.h"
#include "NodeArea.h"
#include "ProblematicGameInstance.h"
#include "DSP/Osc.h"
#include "Elements/Framework/TypedElementAssetEditorToolkitHostMixin.h"
#include "Engine/CoreSettings.h"
#include "Kismet/GameplayStatics.h"

void UProblematicFunctions::GenerateDungeonMap(TArray<FAreaAndFrequency> NodesAndFrequency, AEdgePathway* EdgeAsset, FVector2D MapLocation, float MapSpawnCircle, float SpaceBetweenAreas,int32 RoomAmountToSpawn, UObject* WorldContextObject)
{
	if (IsValid(WorldContextObject))
	{
		//--==== create a dungeon actor instance to save rooms to ====--
		FVector Location = FVector(MapLocation.X, MapLocation.Y, 0.f);
		FActorSpawnParameters SpawnParams;
		ADungeon* NewMap = WorldContextObject->GetWorld()->SpawnActor<ADungeon>(Location, FRotator(0.f), SpawnParams);
		
		//--== calculate the minimum amount of rooms based on the frequency array ==--
		int32 TotalRoomsMinimum = 0;
		for (auto Amount : NodesAndFrequency)
		{
			TotalRoomsMinimum += Amount.FrequencyMinimum;
		}
		//--== check if the room amount to spawn is large enough to be valid ==--
		if (RoomAmountToSpawn < TotalRoomsMinimum)
		{
			RoomAmountToSpawn = TotalRoomsMinimum;
		}

		//--==== have at least the minimum amount of rooms to generate per room first ====--
		for (auto AreaAndMinimum : NodesAndFrequency)
		{
			//--== spawn room * minimum amount ==--
			for (int32 i = 0; i < AreaAndMinimum.FrequencyMinimum; i++)
			{
				//--== set random location in a circular area ==--
				float Angle = FMath::FRandRange(0, 365.f); // circle angle point
				float CosAngle = FMath::Cos(Angle);
				float SinAngle = FMath::Sin(Angle);
		
				FVector NodeLocation;
				NodeLocation.X = CosAngle * MapSpawnCircle + MapLocation.X;
				NodeLocation.Y = SinAngle * MapSpawnCircle + MapLocation.Y;
				NodeLocation.Z = 0.f;

				//--== spawn room ==--
				ANodeArea* NewRoom = WorldContextObject->GetWorld()->SpawnActor<ANodeArea>(AreaAndMinimum.NodeAreaClass, NodeLocation, FRotator(0.f), SpawnParams);
				//--== add to dungeon actor ==--
				NewMap->AddArea(NewRoom);
			}
		}
	
		//--==== calculate how many more rooms need to be generated after the minimum amount per room has be spawned ====--
		RoomAmountToSpawn -= TotalRoomsMinimum;

		//--==== randomise the remaining rooms to spawn ====--
		for (int32 i = 0; i < RoomAmountToSpawn; i++)
		{
			//--== randomise which area to spawn ==--
			float Iterator = FMath::FRandRange(0.f, NodesAndFrequency.Num());

			//--== set random location in a circular area ==--
			float Angle = FMath::FRandRange(0, 365.f); // circle angle point
			float CosAngle = FMath::Cos(Angle);
			float SinAngle = FMath::Sin(Angle);
			FVector NodeLocation;
			NodeLocation.X = CosAngle * MapSpawnCircle + MapLocation.X;
			NodeLocation.Y = SinAngle * MapSpawnCircle + MapLocation.Y;
			NodeLocation.Z = 0.f;

			//--== spawn room ==--
			ANodeArea* NewRoom = WorldContextObject->GetWorld()->SpawnActor<ANodeArea>(NodesAndFrequency[Iterator].NodeAreaClass, NodeLocation, FRotator(0.f), SpawnParams);
			//--== add to dungeon actor ==--
			NewMap->AddArea(NewRoom);
		}

		bool ShouldExecuteDelaunayTriangulationOnceCompleted = false;
		if (IsValid(EdgeAsset))
			ShouldExecuteDelaunayTriangulationOnceCompleted = true;
		
		//--==== Move each room apart from one another ====--
		SeparationSteeringAlgorithm(NewMap->GetAllNodeAreas(), SpaceBetweenAreas);

		//--==== Connect rooms together via triangulation ====--
		TArray<FDelaunayEdge> InitialEdges = DelaunayTriangulationAlgorithm(NewMap->GetAllNodeAreas(), NewMap, WorldContextObject);
		
		for (auto Edge : InitialEdges)
		{
			DrawDebugLine(WorldContextObject->GetWorld(), FVector(Edge.StartPoint, 0.f), FVector(Edge.EndPoint, 0.f), FColor::Red, true);
		}
		
		FString newText = FString::Printf(TEXT("--==== Num of Edges: %d"), InitialEdges.Num());
		
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, newText);
		}
		
		//--==== remove most of the edges ====--
		//TArray<FVector2D> RemainingEdges = MinimumSpanningTreeAlgorithm(NewMap->GetAllNodeAreas(), InitialEdges);
	}
}

void UProblematicFunctions::GenerateDungeonAndLoadLevel(FName levelToLoad, TArray<FAreaAndFrequency> NodesAndFrequency, AEdgePathway* EdgeAsset, FVector2D MapLocation, float MapSpawnCircle, int32 RoomAmountToSpawn, UObject* WorldContextObject)
{
	//--==== check if the current game instance is the problematic game instance ====--
	if (UProblematicGameInstance* instance = Cast<UProblematicGameInstance>(WorldContextObject->GetWorld()->GetGameInstance()))
	{
		//--==== load level after the game instance gets updated ====--
		UGameplayStatics::OpenLevel(WorldContextObject, levelToLoad);
	}
}

TArray<FVector2D> UProblematicFunctions::MinimumSpanningTreeAlgorithm(TArray<ANodeArea*> Nodes, TArray<FVector2D> Edges)
{
	TArray<FVector2D> RemainingEdges;
	return RemainingEdges;
}

TArray<FDelaunayEdge> UProblematicFunctions::DelaunayTriangulationAlgorithm(TArray<ANodeArea*> Nodes, ADungeon* DungeonMap, UObject* WorldContextObject)
{
	TArray<FDelaunayEdge> Edges;
	int32 Iterator = 0;
	
	//--== get Most positive node away ==--
	float MaxPositiveX = Nodes[0]->GetActorLocation().X - DungeonMap->GetCentrePoint().X;
	float MaxPositiveY = Nodes[0]->GetActorLocation().Y - DungeonMap->GetCentrePoint().Y;
	//--== get Most Negative Node Away ==--
	float MaxNegativeX = Nodes[0]->GetActorLocation().X - DungeonMap->GetCentrePoint().X;
	float MaxNegativeY = Nodes[0]->GetActorLocation().X - DungeonMap->GetCentrePoint().X;
	
	for (auto Node : Nodes)
	{
		FVector2D NodePos2D(Node->GetActorLocation().X,Node->GetActorLocation().Y);
		float XValue = NodePos2D.X - DungeonMap->GetCentrePoint().X;
		float YValue = NodePos2D.Y - DungeonMap->GetCentrePoint().Y;
		
		//--==== X values ====--
		if (XValue > MaxPositiveX)
		{
			MaxPositiveX = XValue;
		}
		else if (XValue < MaxNegativeX)
		{
			MaxNegativeX = XValue;
		}
		//--==== Y values ====--
		if (YValue > MaxPositiveY)
		{
			MaxPositiveY = YValue;
		}
		else if (YValue < MaxNegativeY)
		{
			MaxNegativeY = YValue;
		}
		Iterator++;
	}
	
	//--==== create a box around all Nodes ====--
	FVector2D BottomLeft(MaxNegativeX,MaxNegativeY);
	FVector2D TopRight(MaxPositiveX,MaxPositiveY);
	/*|-----------------O
	 *|                 |
	 *|                 |
	 *|                 |
	 *O-----------------|
	 */
	FBox2D BoundingBox(BottomLeft,TopRight);
	DrawDebugBox(WorldContextObject->GetWorld(), FVector(BoundingBox.GetCenter().X, BoundingBox.GetCenter().Y, 0.f), FVector(BoundingBox.GetExtent().X, BoundingBox.GetExtent().Y, 10.f), FColor::Green, true, -1, 0, 2.f);
	
	//--==== Super Triangle ====--
	FVector2D SuperV1 = FVector2D(MaxNegativeX - (BoundingBox.GetExtent().X * 0.1f), MaxPositiveY + (BoundingBox.GetExtent().Y * 2.f));
	FVector2D SuperV2 = FVector2D(MaxNegativeX - (BoundingBox.GetExtent().X * 0.1f), MaxNegativeY - (BoundingBox.GetExtent().Y * 2.f));
	FVector2D SuperV3 = FVector2D(MaxPositiveX + (BoundingBox.GetExtent().X * 1.1f), MaxNegativeY + (BoundingBox.GetExtent().Y));
	DrawDebugLine(WorldContextObject->GetWorld(), FVector(SuperV1, 0.f), FVector(SuperV2, 0.f), FColor::Green, true, -1, 0, 10.f);
	DrawDebugLine(WorldContextObject->GetWorld(), FVector(SuperV2, 0.f), FVector(SuperV3, 0.f), FColor::Green, true, -1, 0, 10.f);
	DrawDebugLine(WorldContextObject->GetWorld(), FVector(SuperV3, 0.f), FVector(SuperV1, 0.f), FColor::Green, true, -1, 0, 10.f);
		
	DelaunayTriangle* SuperTriangle = new DelaunayTriangle(SuperV1, SuperV2, SuperV3);

	TArray<DelaunayTriangle*> Triangles;
	TArray<int32> BadTriangles;
	Triangles.Add(SuperTriangle);
	//--== triangulate each vertex ==--
	for (auto FocusedNode : Nodes)
	{
		AddVertex(FocusedNode->Get2DLocation(), Triangles);
		
		
		// test if this node is in any triangle in the triangulation
		int32 TriangleIndex = 0;
		for (auto FocusedTriangle : Triangles)
		{
			if (FocusedTriangle->InCircle(FocusedNode->Get2DLocation()))
			{
				BadTriangles.Add(TriangleIndex);
			}
			TriangleIndex++;
		}
	}
	//remove any triangles that contain a Node within them
	for (auto Index : BadTriangles)
	{
		
		delete Triangles[Index];
		Triangles.RemoveAt(Index);
	}
	
	//--== remove the triangles that share edges with super triangle ==--
	TArray<int32> TrianglesToDestroySafely;
	for (int32 i = 0; i < Triangles.Num(); i++)
	{
		if (ShouldDestroyTriangle(Triangles[i], SuperV1, SuperV2, SuperV3))
		{
			TrianglesToDestroySafely.Add(i);
		}
	}
	for (auto index : TrianglesToDestroySafely)
	{
		if (index <= Triangles.Num())
		{
			delete Triangles[index];
			Triangles.RemoveAt(index);
		}
	}

	//--== finally get all the current edges from the triangles ==--
	for (auto FocusedTriangle : Triangles)
	{
		Edges.Add(FDelaunayEdge(FocusedTriangle->GetVertex1(), FocusedTriangle->GetVertex2()));
		Edges.Add(FDelaunayEdge(FocusedTriangle->GetVertex2(), FocusedTriangle->GetVertex3()));
		Edges.Add(FDelaunayEdge(FocusedTriangle->GetVertex3(), FocusedTriangle->GetVertex1()));
	}
	
	Edges = UniqueEdges(Edges);
	
	return Edges;
}

void UProblematicFunctions::SeparationSteeringAlgorithm(TArray<ANodeArea*> Nodes, float HalfSpaceBetweenAreas)
{
	TArray<ANodeArea*> NodesThatOverlapped = Nodes;
	
	for (auto Node : Nodes)
	{
		FVector2D SeparationForce = FVector2D::ZeroVector;
		int32 OverlapCount = 0;
		FVector2D CachedForcesCombined = FVector2D::ZeroVector;
		
		//--==== calculate boxes ====--
		FBox2D InnerPerimeter;
		FBox2D OuterPerimeter;
		Node->BoundingBox(InnerPerimeter, OuterPerimeter, HalfSpaceBetweenAreas);
		
		//--==== get overlapping actors ====--
		for (auto OtherNode : Nodes)
		{
			if (OtherNode != Node)
			{
				FBox2D OtherInnerPerimeter;
				FBox2D OtherOuterPerimeter;
				OtherNode->BoundingBox(OtherInnerPerimeter, OtherOuterPerimeter, HalfSpaceBetweenAreas);
				
				if (OtherInnerPerimeter.Intersect(InnerPerimeter))
				{
					//--==== max force push away ====--
					FVector2D Direction = FVector2D(Node->GetActorLocation().X, Node->GetActorLocation().Y) - FVector2D(OtherNode->GetActorLocation().X, OtherNode->GetActorLocation().Y);
					CachedForcesCombined += Direction * 2.f;
					OverlapCount++;
				}
				else if (OtherOuterPerimeter.Intersect(OuterPerimeter))
				{
					//--== min force push away ====--
					FVector2D Direction = FVector2D(Node->GetActorLocation().X, Node->GetActorLocation().Y) - FVector2D(OtherNode->GetActorLocation().X, OtherNode->GetActorLocation().Y);
					CachedForcesCombined += Direction;
					OverlapCount++;
				}
			}
		}
		if (OverlapCount > 0)
		{
			//--== apply the force ==--
			FVector2D AveragedForce = CachedForcesCombined / OverlapCount;
			float EndX = Node->GetActorLocation().X + (AveragedForce.X);
			float EndY = Node->GetActorLocation().Y + (AveragedForce.Y);
			//--== set location of node ==--
			Node->SetActorLocation(FVector(EndX,EndY,0.f));
			
			//--== add to array for nodes that need to check if they are now overlapping something else ==--
			NodesThatOverlapped.Add(Node);
		}
		else
		{
			NodesThatOverlapped.Remove(Node);
		}
	}
	
	if (NodesThatOverlapped.Num() > 0)
	{
		SeparationSteeringAlgorithm(Nodes, HalfSpaceBetweenAreas);
	}
}


float UProblematicFunctions::Determinant3x3(FMatrix3x3 Matrix)
{
	float deter = Matrix.Row1.X * 
	((Matrix.Row2.Y * Matrix.Row3.Z) - (Matrix.Row2.Z * Matrix.Row3.Y)) - Matrix.Row1.Y *
		((Matrix.Row2.X * Matrix.Row3.Z) - (Matrix.Row2.Z * Matrix.Row3.X)) + Matrix.Row1.Z *
			((Matrix.Row2.X * Matrix.Row3.Y) - (Matrix.Row2.Y * Matrix.Row3.X));
	
	return deter;
}

void UProblematicFunctions::AddVertex(FVector2D Vertex, TArray<DelaunayTriangle*> &Triangles)
{
	TArray<FDelaunayEdge> Edges;
	TArray<DelaunayTriangle*> TempTriangles;
	//filter through triangles
	for (auto Triangle : Triangles)
	{
		//if the vertex in inside the circle of the 3 points
		if (Triangle->InCircle(Vertex))
		{
			Edges.Add(FDelaunayEdge(Triangle->GetVertex1(), Triangle->GetVertex2()));
			
			Edges.Add(FDelaunayEdge(Triangle->GetVertex2(), Triangle->GetVertex3()));
			
			Edges.Add(FDelaunayEdge(Triangle->GetVertex3(), Triangle->GetVertex1()));
		}
	}

	//remove any duplicated edges from the array
	//Edges = UniqueEdges(Edges);
	
	//update the triangles array
	for (auto Edge : Edges)
	{
		Triangles.Add(new DelaunayTriangle(Edge.StartPoint, Edge.EndPoint, Vertex));
	}
}

TArray<FDelaunayEdge> UProblematicFunctions::UniqueEdges(TArray<FDelaunayEdge> Edges)
{
	TArray<FDelaunayEdge> UniqueEdges;

	//--== this function removes any duplicated edges from the edges array ==--
	for (int i = 0; i < Edges.Num(); i++)
	{
		bool IsEdgeUnique = true;
		
		for (int j = 0; j < Edges.Num(); j++)
		{
			if ((i != j) && (EquivelentEdges(Edges[i], Edges[j])))
			{
				//remove this edge
				IsEdgeUnique = false;
				break;
			}
		}
		
		if (IsEdgeUnique)
		{
			UniqueEdges.Add(Edges[i]);
		}
	}

	return UniqueEdges;
}

bool UProblematicFunctions::EquivelentEdges(FDelaunayEdge Edge1, FDelaunayEdge Edge2)
{
	if (Edge1.StartPoint == Edge2.StartPoint)
	{
		if (Edge1.EndPoint == Edge2.EndPoint)
		{
			return true;
		}
	}
	
	return false;
}

bool UProblematicFunctions::ShouldDestroyTriangle(DelaunayTriangle* Triangle, FVector2D V1, FVector2D V2, FVector2D V3)
{
	for (auto vertex : Triangle->GetCollatedVerticies())
	{
		if (vertex == V1 || vertex == V2 || vertex == V3)
		{
			//remove triangle
			return true;
		}
	}
	return false;
}

