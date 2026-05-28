// Fill out your copyright notice in the Description page of Project Settings.


#include "ProblematicFunctions.h"
#include "Dungeon.h"
#include "EdgePathway.h"
#include "NodeArea.h"
#include "ProblematicGameInstance.h"
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
		//TArray<FVector2D> InitialEdges = DelaunayTriangulationAlgorithm(NewMap->GetAllNodeAreas());
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

TArray<FVector2D> UProblematicFunctions::DelaunayTriangulationAlgorithm(TArray<ANodeArea*> Nodes, ADungeon* DungeonMap)
{
	FMatrix MatrixForDetermenant;
	TArray<FVector2D> Edges;
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
	
	//--==== Super Triangle ====--
	FVector2D SuperV1 = FVector2D(MaxNegativeX - (BoundingBox.GetExtent().X * 0.1f), MaxPositiveY + (BoundingBox.GetExtent().Y * 2.f));
	FVector2D SuperV2 = FVector2D(MaxNegativeX - (BoundingBox.GetExtent().X * 0.1f), MaxNegativeY - (BoundingBox.GetExtent().Y * 2.f));
	FVector2D SuperV3 = FVector2D(MaxPositiveX + (BoundingBox.GetExtent().X * 1.1f), MaxNegativeY + (BoundingBox.GetExtent().Y));
	
	for (auto Node : Nodes)
	{
		FVector2D NodePos2D(Node->GetActorLocation().X,Node->GetActorLocation().Y);
		
		for (auto OtherNode : Nodes)
		{
			FMatrix ABCMatrix = 
			{
				FPlane(SuperV1.X,SuperV1.Y,(SuperV1.X * SuperV1.X) + (SuperV1.Y * SuperV1.Y),1),
				FPlane(SuperV2.X,SuperV2.Y,(SuperV2.X * SuperV2.X) + (SuperV1.Y * SuperV1.Y),1),
				FPlane(SuperV3.X,SuperV3.Y,(SuperV3.X * SuperV3.X) + (SuperV1.Y * SuperV1.Y),1),
				FPlane(NodePos2D.X,NodePos2D.Y,(NodePos2D.X * NodePos2D.X) + (NodePos2D.Y * NodePos2D.Y),1)
			};

			/*float deter = (float)ABCMatrix.Determinant();
			
			switch (deter)
			{
			case -1:
				//--== not inside circle
				break;
			case 0:
				//--== on circumference of circle ==--
				break;
			case 1:
				//--== is inside of circle ==--
				break;
			default:
				//--== Invalid data ==--
				break;
			};*/
		}
		
	}

//--==== method of adding a new point to the graph ====--
	//--== 1. locate the triangle that the point is within ==--
	//make 3 new triangles ==--
	
	//MakeTriangle(); //BCP
	//MakeTriangle(); //CAP
	//Calculate the sign of the oriented area for each triangle via the determinant of a 3x3 matrix with z = 1
	/*
	 * This tells you whether the triangles verts are listed clockwise (negative), or counter-clockwise (positive),
	 * if all of these triangles are counter-clockwise then the point is inside the triangle.
	 * ANOTHER way this can be explained:
	 * If every triangle's determenant is negative then the point is 'to the left' of every edge of the triangle MATRIX.
	 */
	
	//--==== quad-edges ====--
	
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

UProblematicFunctions::FQuadEdgeRef* UProblematicFunctions::MakeQuadEdge(FVector2D Start, FVector2D End)
{
	//--== quad-edge-references ==--
	FQuadEdgeRef* StartEnd = new FQuadEdgeRef(); //top --> bottom
	FQuadEdgeRef* EndStart = new FQuadEdgeRef(); //bottom --> top
	FQuadEdgeRef* LeftRight = new FQuadEdgeRef(); //left face --> right face
	FQuadEdgeRef* RightLeft = new FQuadEdgeRef(); //right face --> left face

	StartEnd->Data = Start;
	EndStart->Data = End;

	StartEnd->Rotate = LeftRight;
	LeftRight->Rotate = EndStart;
	EndStart->Rotate = RightLeft;
	RightLeft->Rotate = StartEnd;

	//--== normal edges on different5 verticies ==--
	StartEnd->Next = StartEnd;
	EndStart->Next = EndStart;
	//--== dual edges ==--
	LeftRight->Next = RightLeft;
	RightLeft->Next = LeftRight;
	
	return StartEnd;
}

void UProblematicFunctions::SwapNexts(FQuadEdgeRef* A, FQuadEdgeRef* B)
{
	//
	FQuadEdgeRef* NextA = A->Next;
	A->Next = B->Next;
	B->Next = NextA;
}

void UProblematicFunctions::Splice(FQuadEdgeRef* A, FQuadEdgeRef* B)
{
	//--== this function is never called directly in the algorithm, instead it will be used to generate higher level functions that will be called in the algorithm ==--
	SwapNexts(A->Next->Rotate, B->Next->Rotate);
	SwapNexts(A, B);
}

UProblematicFunctions::FQuadEdgeRef* UProblematicFunctions::MakeTriangle(FVector2D A, FVector2D B, FVector2D C)
{
	FQuadEdgeRef* AB = MakeQuadEdge(A, B);
	FQuadEdgeRef* BC = MakeQuadEdge(B, C);
	FQuadEdgeRef* CA = MakeQuadEdge(C, A);

	Splice(SymmetricEdge(AB), BC);
	Splice(SymmetricEdge(BC), CA);
	Splice(SymmetricEdge(CA), AB);
	
	return AB;
}

UProblematicFunctions::FQuadEdgeRef* UProblematicFunctions::Connect(FQuadEdgeRef* A, FQuadEdgeRef* B)
{
	//--== for connecting edges together ==--
	FQuadEdgeRef* NewEdge = MakeQuadEdge(Destination(A), B->Data);
	Splice(NewEdge, LeftOfCurrentEdge(A));
	Splice(SymmetricEdge(NewEdge), B);

	return NewEdge;
}

void UProblematicFunctions::SeverEdge(FQuadEdgeRef* Edge)
{
	Splice(Edge, GetPreviousEdge(Edge));
	Splice(SymmetricEdge(Edge), GetPreviousEdge(SymmetricEdge(Edge)));
}

UProblematicFunctions::FQuadEdgeRef* UProblematicFunctions::InsertPoint(FQuadEdgeRef* PolygonEdge,
	FVector2D NodeLocation)
{
	FQuadEdgeRef* FirstSpoke = MakeQuadEdge(PolygonEdge->Data, NodeLocation);
	Splice(FirstSpoke, PolygonEdge);
	
	FQuadEdgeRef* Spoke = FirstSpoke;
	
	do
	{
		Spoke = Connect(PolygonEdge, SymmetricEdge(Spoke));
		Rotate(Spoke)->Data = FVector2D::ZeroVector;
		RotateOtherWay(Spoke)->Data = FVector2D::ZeroVector;
		PolygonEdge = GetPreviousEdge(Spoke);
	} while (LeftOfCurrentEdge(PolygonEdge) != FirstSpoke);
	
	return FirstSpoke;
}

void UProblematicFunctions::FlipDiagonalEdge(FQuadEdgeRef* Edge)
{
	FQuadEdgeRef* A = GetPreviousEdge(Edge);
	FQuadEdgeRef* B = GetPreviousEdge(SymmetricEdge(Edge));

	Splice(Edge, A);
	Splice(SymmetricEdge(Edge), B);
	
	Splice(Edge, LeftOfCurrentEdge(A));
	Splice(SymmetricEdge(Edge), LeftOfCurrentEdge(B));
	
	Edge->Data = Destination(A);
	Destination(Edge) = Destination(B);
}
 