// Fill out your copyright notice in the Description page of Project Settings.


#include "ProblematicFunctions.h"
#include "Dungeon.h"
#include "NodeArea.h"
#include "ProblematicGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UProblematicFunctions::GenerateDungeonMap(TArray<FAreaAndFrequency> NodesAndFrequency, AEdgePathway* EdgeAsset, FVector2D MapLocation, float MapSpawnCircle,int32 RoomAmountToSpawn, UObject* WorldContextObject)
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
		for (auto Area : NodesAndFrequency)
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
			ANodeArea* NewRoom = WorldContextObject->GetWorld()->SpawnActor<ANodeArea>(Area.NodeAreaClass, NodeLocation, FRotator(0.f), SpawnParams);
			//--== add to dungeon actor ==--
			NewMap->AddArea(NewRoom);
		}
	}
	}
}

void UProblematicFunctions::GenerateDungeonAndLoadLevel(FName levelToLoad, TArray<ANodeArea*> Nodes,
                                                        AEdgePathway* EdgeAsset, FVector2D MapLocation, float MapSpawnCircle, int32 RoomAmountToSpawn,
                                                        TArray<int32> FrequencyPerRoom, UWorld* WorldContextObject)
{
	//--==== check if the current game instance is the problematic game instance ====--
	if (UProblematicGameInstance* instance = Cast<UProblematicGameInstance>(WorldContextObject->GetGameInstance()))
	{
		//--==== load level after the game instance gets updated ====--
		UGameplayStatics::OpenLevel(WorldContextObject, levelToLoad);
	}
}

void UProblematicFunctions::MinimumSpanningTreeAlgorithm(TArray<ANodeArea*> Nodes, TArray<FVector2D> Edges)
{
}

TArray<FVector2D> UProblematicFunctions::DelaunayTriangulationAlgorithm(TArray<ANodeArea*> Nodes)
{
	FVector2D side1(1.f, 2.f);
	TArray<FVector2D> Edges;
	
	Edges.Add(side1);
	
	return Edges;
}

void UProblematicFunctions::SeparationSteeringAlgorithm(TArray<ANodeArea*> Nodes, FVector2D MapLocation, float MapSpawnCircle, float HalfSpaceBetweenAreas, UWorld* WorldContextObject)
{
	//--==== very expensive operation ====--
	for (auto Node : Nodes)
	{
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
				}
				else if (OtherOuterPerimeter.Intersect(OuterPerimeter))
				{
					//--== min force push away ====--
				}
			}
		}
		
		//--==== has reached desired distance away ====--
		
	}
}
