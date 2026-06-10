// Fill out your copyright notice in the Description page of Project Settings.
#include "UnrealC++Classes/ProblematicFunctions.h"
#include "PureC++Classes/DelaunayEdge.h"
#include "PureC++Classes/DelaunayTriangle.h"
#include "UnrealC++Classes/Dungeon.h"
#include "UnrealC++Classes/EdgePathway.h"
#include "MatrixTypes.h"
#include "UnrealC++Classes/NodeArea.h"
#include "UnrealC++Classes/ProblematicGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

void UProblematicFunctions::GenerateDungeonMap(TArray<FAreaAndFrequency> NodesAndFrequency, FVector2D MapLocation, float MapSpawnCircle, float SpaceBetweenAreas,int32 RoomAmountToSpawn, UObject* WorldContextObject)
{
	if (IsValid(WorldContextObject))
	{
		double StartTime = FPlatformTime::Seconds();
		
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
				float Angle = FMath::FRandRange(0.f, 2.f * PI); // circle angle point
				float Radius = MapSpawnCircle * FMath::Sqrt(UKismetMathLibrary::RandomFloatInRange(0, 1.f));
				float CosAngle = Radius * FMath::Cos(Angle);
				float SinAngle = Radius * FMath::Sin(Angle);
		
				FVector NodeLocation;
				NodeLocation.X = CosAngle + MapLocation.X;
				NodeLocation.Y = SinAngle + MapLocation.Y;
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
			float Radius = MapSpawnCircle * FMath::Sqrt(UKismetMathLibrary::RandomFloatInRange(0, 1.f));
			//--== set random location in a circular area ==--
			float Angle = FMath::FRandRange(0, 365.f); // circle angle point
			float CosAngle = Radius * FMath::Cos(Angle);
			float SinAngle = Radius * FMath::Sin(Angle);
			FVector NodeLocation;
			NodeLocation.X = CosAngle + MapLocation.X;
			NodeLocation.Y = SinAngle + MapLocation.Y;
			NodeLocation.Z = 0.f;

			//--== spawn room ==--
			ANodeArea* NewRoom = WorldContextObject->GetWorld()->SpawnActor<ANodeArea>(NodesAndFrequency[Iterator].NodeAreaClass, NodeLocation, FRotator(0.f), SpawnParams);
			//--== add to dungeon actor ==--
			NewMap->AddArea(NewRoom);
		}
		
		//--==== Move each room apart from one another ====--
		SeparationSteeringAlgorithm(NewMap->GetAllNodeAreas(), SpaceBetweenAreas);

		//--==== Connect rooms together via triangulation ====--
		TArray<DelaunayEdge*> InitialEdges = DelaunayTriangulationAlgorithm(NewMap->GetAllNodeAreas(), NewMap, WorldContextObject);
		int32 init = InitialEdges.Num();
		/*if (GEngine)
		{
			FString newText = FString::Printf(TEXT("--==== Initial Edges BEFORE MST: %d"), InitialEdges.Num());
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Blue, newText);
		}*/
		//--==== minimum spanning tree on those connections ====--
		TArray<DelaunayEdge*> MSTEdges = MinimumSpanningTreeAlgorithm(InitialEdges[0]->GetStartPoint(), InitialEdges);

		InitialEdges.RemoveAll([MSTEdges] (DelaunayEdge* Edge) -> bool
		{
			for (DelaunayEdge* MSTEdge : MSTEdges)
			{
				if (DelaunayEdge::AlmostEqual(Edge, MSTEdge))
				{
					return true;
				}
			}
			return false;
		});

		//--==== remaining initial edges from delaunay triangulation ====--
		TArray<DelaunayEdge*> AddedBackEdges;
		for (int32 i = 0; i < InitialEdges.Num(); i++)
		{
			if (FMath::RandRange(0.f, 1.f) < 0.125f)
			{
				AddedBackEdges.Add(InitialEdges[i]);
			}
		}
		
		TArray<DelaunayEdge*> FinalEdges;
		for (int32 i = 0; i < AddedBackEdges.Num(); i++)
		{
			FinalEdges.Add(AddedBackEdges[i]);
		}
		for (int32 i = 0; i < MSTEdges.Num(); i++)
		{
			FinalEdges.Add(MSTEdges[i]);
		}

		//--==== generate portals to connecting rooms ====--
		for (ANodeArea* Node : NewMap->GetAllNodeAreas())
		{
			for (DelaunayEdge* Edge : FinalEdges)
			{
				if (DelaunayEdge::AlmostEqualVertexToABS(Edge->GetStartPoint(), Node->Get2DLocation()))
				{
					for (ANodeArea* DestNode : NewMap->GetAllNodeAreas())
					{
						if (DelaunayEdge::AlmostEqualVertexToABS(Edge->GetEndPoint(), DestNode->Get2DLocation()))
						{
							Node->GenerateTeleporter(DestNode);
							break;
						}
					}
				}
				else if (DelaunayEdge::AlmostEqualVertexToABS(Edge->GetEndPoint(), Node->Get2DLocation()))
				{
					for (ANodeArea* DestNode : NewMap->GetAllNodeAreas())
					{
						if (DelaunayEdge::AlmostEqualVertexToABS(Edge->GetStartPoint(), DestNode->Get2DLocation()))
						{
							Node->GenerateTeleporter(DestNode);
							break;
						}
					}
				}
			}
		}
		//--==== run the setup function for the portals once all of them have been added as actor components to the nodes====--
		for (ANodeArea* Node : NewMap->GetAllNodeAreas())
		{
			Node->FinaliseTeleporterSetup();
		}
		
		double EndTime = FPlatformTime::Seconds();
		float Duration = (EndTime - StartTime) * 1000.f;
		UE_LOG(LogTemp, Error, TEXT("--==== Generate Dungeon took: %f ms"), Duration);

		UKismetSystemLibrary::DrawDebugCircle(WorldContextObject->GetWorld(), FVector(NewMap->GetCentrePoint(), 0.f), MapSpawnCircle, 20, FLinearColor::White, 1000000, 5.f, FVector(1,0,0), FVector(0,1,0), false);

		//------====== DEBUG INFORMATION ======------
		for (auto Edge : AddedBackEdges)
		{
			DrawDebugLine(WorldContextObject->GetWorld(), FVector(Edge->GetStartPoint(), 25.f), FVector(Edge->GetEndPoint(), 25.f), FColor::Black, true);
		}
		for (auto Edge : MSTEdges)
		{
			DrawDebugLine(WorldContextObject->GetWorld(), FVector(Edge->GetStartPoint(), 25.f), FVector(Edge->GetEndPoint(), 25.f), FColor::Red, true, -1, 0, 5.f);
		}
		if (GEngine)
		{
			FString newText = FString::Printf(TEXT("--==== Initial Edges AFTER MST: %d"), InitialEdges.Num());
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Blue, newText);
			
			FString newText1 = FString::Printf(TEXT("--==== MST Edges: %d"), MSTEdges.Num());
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, newText1);
			
			FString newText2 = FString::Printf(TEXT("--==== Added Back Edges: %d"), AddedBackEdges.Num());
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, newText2);

			int32 init2 = MSTEdges.Num();
			int32 init3 = InitialEdges.Num();
			FString newText3 = FString::Printf(TEXT("--==== Difference: %d"), init - init2 - init3);
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Blue, newText3);
		}
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

TArray<DelaunayEdge*> UProblematicFunctions::MinimumSpanningTreeAlgorithm(FVector2D StartPoint, TArray<DelaunayEdge*> Edges)
{
	TArray<FVector2D> OpenSetOfVerts;
	TArray<FVector2D> ClosedSetOfVerts;
	TArray<DelaunayEdge*> ResultingEdges;
	
	for (DelaunayEdge* Edge : Edges)
	{
		OpenSetOfVerts.Add(Edge->GetStartPoint());
		OpenSetOfVerts.Add(Edge->GetEndPoint());
	}

	ClosedSetOfVerts.Add(StartPoint);

	//--==== while there are still verts to process ====--
	while (OpenSetOfVerts.Num() > 0)
	{
		bool Chosen = false;
		DelaunayEdge* ChosenEdge = nullptr;
		float MinWeight = FLT_MAX;

		//--==== iterate through every edge to determine if it would make a cyclic redundency ====--
		for (int32 i = 0; i < Edges.Num(); i++)
		{
			int32 ClosedVertsCount = 0;
			//--== if the end point is in the verts that it ain't allowed to touch ==-- 
			if (!ClosedSetOfVerts.Contains(Edges[i]->GetEndPoint()))
				ClosedVertsCount++;
			//--== if the start point is int the array of verts that ain't allowed to touch ==--
			if (!ClosedSetOfVerts.Contains(Edges[i]->GetStartPoint()))
				ClosedVertsCount++;
			
			if (ClosedVertsCount != 1)
				continue;

			//--==== if the distance of this edge is lower than the distance of the last edge ====--
			if (Edges[i]->GetDistance() < MinWeight)
			{
				ChosenEdge = Edges[i];
				Chosen = true;
				MinWeight = Edges[i]->GetDistance();
			}
		}
		
		//--==== if none are chosen (mst finished) ====--
		if (!Chosen)  
			break;

		//--==== if a shortest edge has been chosen ====--
		ResultingEdges.Add(ChosenEdge);
		//--== remove from unsorted list ==--
		OpenSetOfVerts.Remove(ChosenEdge->GetEndPoint());
		OpenSetOfVerts.Remove(ChosenEdge->GetStartPoint());
		//--== add to already sorted verts ==--
		ClosedSetOfVerts.Add(ChosenEdge->GetEndPoint());
		ClosedSetOfVerts.Add(ChosenEdge->GetStartPoint());
	}
	return ResultingEdges;
}

TArray<DelaunayEdge*> UProblematicFunctions::DelaunayTriangulationAlgorithm(TArray<ANodeArea*> Nodes, ADungeon* DungeonMap, UObject* WorldContextObject)
{
	int32 Iterator = 0;
	
	//--== get Most positive node away ==--
	float MaxPositiveX = Nodes[0]->GetActorLocation().X - DungeonMap->GetCentrePoint().X;
	float MaxPositiveY = Nodes[0]->GetActorLocation().Y - DungeonMap->GetCentrePoint().Y;
	//--== get Most Negative Node Away ==--
	float MaxNegativeX = Nodes[0]->GetActorLocation().X - DungeonMap->GetCentrePoint().X;
	float MaxNegativeY = Nodes[0]->GetActorLocation().Y - DungeonMap->GetCentrePoint().Y;
	
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
	//DrawDebugBox(WorldContextObject->GetWorld(), FVector(BoundingBox.GetCenter().X, BoundingBox.GetCenter().Y, 0.f), FVector(BoundingBox.GetExtent().X, BoundingBox.GetExtent().Y, 10.f), FColor::Green, true, -1, 0, 2.f);
	
	//--==== Super Triangle ====--
	FVector2D SuperV1 = FVector2D(MaxNegativeX - (BoundingBox.GetExtent().X * 0.1f), MaxPositiveY + (BoundingBox.GetExtent().Y * 2.f));
	FVector2D SuperV2 = FVector2D(MaxNegativeX - (BoundingBox.GetExtent().X * 0.1f), MaxNegativeY - (BoundingBox.GetExtent().Y * 2.f));
	FVector2D SuperV3 = FVector2D(MaxPositiveX + (BoundingBox.GetExtent().X * 1.1f), MaxNegativeY + (BoundingBox.GetExtent().Y));
	//DrawDebugLine(WorldContextObject->GetWorld(), FVector(SuperV1, 0.f), FVector(SuperV2, 0.f), FColor::Green, true, -1, 0, 10.f);
	//DrawDebugLine(WorldContextObject->GetWorld(), FVector(SuperV2, 0.f), FVector(SuperV3, 0.f), FColor::Green, true, -1, 0, 10.f);
	//DrawDebugLine(WorldContextObject->GetWorld(), FVector(SuperV3, 0.f), FVector(SuperV1, 0.f), FColor::Green, true, -1, 0, 10.f);
	
	DelaunayTriangle* SuperTriangle = new DelaunayTriangle(SuperV1, SuperV2, SuperV3);

	TArray<DelaunayTriangle*> Triangles;
	TArray<int32> BadTriangles;
	Triangles.Add(SuperTriangle);

	//--==== iterate through all nodes ====--
	for (int32 i = 0; i < Nodes.Num(); i++)
	{
		TArray<DelaunayEdge*> Polygon;

		//--==== iterate through all triangles in the triangulation ====--
		for (int32 t = 0; t < Triangles.Num(); t++)
		{
			if (Triangles[t]->InCircle(Nodes[i]->Get2DLocation()))
			{
				Triangles[t]->SetIsBad(true);
				Polygon.Add(new DelaunayEdge(Triangles[t]->GetVertex1(), Triangles[t]->GetVertex2()));
				Polygon.Add(new DelaunayEdge(Triangles[t]->GetVertex2(), Triangles[t]->GetVertex3()));
				Polygon.Add(new DelaunayEdge(Triangles[t]->GetVertex3(), Triangles[t]->GetVertex1()));
			}
		}

		//--==== remove all triangles that contain a node within ====--
		Triangles.RemoveAll([] (DelaunayTriangle* Tri) -> bool
		{
			return Tri->GetIsBad();
		});

		for (int p1 = 0; p1 < Polygon.Num(); p1++)
		{
			for (int p2 = p1 + 1; p2 < Polygon.Num() ; p2++)
			{
				//--== almost equal function? ==--
				if (DelaunayEdge::AlmostEqual(Polygon[p1], Polygon[p2]))
				{
					Polygon[p1]->SetIsBad(true);
					Polygon[p2]->SetIsBad(true);
				}
			}
		}

		//--==== remove all the edges that are the same ====--
		Polygon.RemoveAll([] (DelaunayEdge* Edge) -> bool
		{
			return Edge->GetIsBad();
		});

		for (DelaunayEdge* Edge : Polygon)
		{
			Triangles.Add(new DelaunayTriangle(Edge->GetStartPoint(), Edge->GetEndPoint(), Nodes[i]->Get2DLocation()));
		}
	}

	//--==== remove all triangles that contain a vertex with the super triangle
	Triangles.RemoveAll([SuperV1, SuperV2, SuperV3] (DelaunayTriangle* DTri) -> bool
	{
		return ShouldDestroyTriangle(DTri, SuperV1, SuperV2, SuperV3);
	});

	//--==== hashset ====--
	TArray<DelaunayEdge*> HashSet;
	for (int i = 0; i < (int)Triangles.Num(); i++)
	{
		HashSet.Add(new DelaunayEdge(Triangles[i]->GetVertex1(), Triangles[i]->GetVertex2()));
		HashSet.Add(new DelaunayEdge(Triangles[i]->GetVertex2(), Triangles[i]->GetVertex3()));
		HashSet.Add(new DelaunayEdge(Triangles[i]->GetVertex3(), Triangles[i]->GetVertex1()));
	}
	
	return HashSet;
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
		Node->SetInnerAndOuterPerimeter(InnerPerimeter, OuterPerimeter);
		
		//--==== get overlapping actors ====--
		for (auto OtherNode : Nodes)
		{
			if (OtherNode != Node)
			{
				FBox2D OtherInnerPerimeter;
				FBox2D OtherOuterPerimeter;
				OtherNode->BoundingBox(OtherInnerPerimeter, OtherOuterPerimeter, HalfSpaceBetweenAreas);
				OtherNode->SetInnerAndOuterPerimeter(InnerPerimeter, OuterPerimeter);
				
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

