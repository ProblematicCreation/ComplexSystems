// Fill out your copyright notice in the Description page of Project Settings.


#include "ProblematicFunctions.h"
#include "Dungeon.h"
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

TArray<FVector2D> UProblematicFunctions::DelaunayTriangulationAlgorithm(TArray<ANodeArea*> Nodes)
{
	TArray<FVector2D> Edges;
	return Edges;
}

void UProblematicFunctions::SeparationSteeringAlgorithm(TArray<ANodeArea*> Nodes, float HalfSpaceBetweenAreas)
{
	//--==== very expensive operation ====--
	for (auto Node : Nodes)
	{
		FVector2D SeparationForce = FVector2D::ZeroVector;
		int32 OverlapCount = 0;
		FVector2D CachedForcesCombined;
		
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
					float Distance = FVector2D::Distance(FVector2D(Node->GetActorLocation().X, Node->GetActorLocation().Y), FVector2D(OtherNode->GetActorLocation().X, OtherNode->GetActorLocation().Y) );
					Direction.Normalize();
					CachedForcesCombined += Direction / Distance;
					//CachedForcesCombined += (FVector2D(Direction / FMath::Square(FVector2D::Distance(FVector2D(Node->GetActorLocation().X, Node->GetActorLocation().Y), FVector2D(OtherNode->GetActorLocation().X, OtherNode->GetActorLocation().Y)))));
					OverlapCount++;
				}
				else if (OtherOuterPerimeter.Intersect(OuterPerimeter))
				{
					//--== min force push away ====--
					FVector2D Direction = FVector2D(Node->GetActorLocation().X, Node->GetActorLocation().Y) - FVector2D(OtherNode->GetActorLocation().X, OtherNode->GetActorLocation().Y);
					float Distance = Direction.Size();
					Direction.Normalize();
					CachedForcesCombined += Direction / Distance;
					//CachedForcesCombined += (FVector2D((Direction / 2.f) / FMath::Square(FVector2D::Distance(FVector2D(Node->GetActorLocation().X, Node->GetActorLocation().Y), FVector2D(OtherNode->GetActorLocation().X, OtherNode->GetActorLocation().Y)))));
					OverlapCount++;
				}
			}
		}
		//--== apply the force ==--
		FVector2D AveragedForce = CachedForcesCombined / OverlapCount;
		float Time = AveragedForce.Size();
		float EndX = Node->GetActorLocation().X +(AveragedForce.X * Time);
		float EndY = Node->GetActorLocation().Y +(AveragedForce.Y * Time);
		//FVector2D NewLocation = FVector2D(Node->GetActorLocation().X, Node->GetActorLocation().Y) + (AveragedForce.GetSafeNormal() * 1.f);
		Node->SetActorLocation(FVector(EndX,EndY,0.f));
	}
}
