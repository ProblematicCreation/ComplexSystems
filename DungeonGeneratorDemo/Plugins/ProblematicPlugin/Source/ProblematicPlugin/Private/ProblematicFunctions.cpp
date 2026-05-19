// Fill out your copyright notice in the Description page of Project Settings.


#include "ProblematicFunctions.h"
#include "Dungeon.h"
#include "NodeArea.h"
#include "ProblematicGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UProblematicFunctions::GenerateDungeonMap(TArray<ANodeArea*> Nodes, AEdgePathway* EdgeAsset, FVector2D MapLocation,
	float MapSpawnCircle, int32 RoomAmountToSpawn, TArray<int32> FrequencyPerRoom, UWorld* WorldContextObject)
{
	//--==== spawn rooms in world and create a dungeon actor instance to save them to ====--
	FVector Location = FVector(MapLocation.X, MapLocation.Y, 0.f);
	FActorSpawnParameters SpawnParams;
	ADungeon* NewMap = WorldContextObject->SpawnActor<ADungeon>(Location, FRotator(0.f), SpawnParams);
	
	for (auto Room : Nodes)
	{
		//--== spawn actors in circle area ==--
		float Angle = FMath::FRandRange(0, 365.f); // circle angle point
		float CosAngle = FMath::Cos(Angle);
		float SinAngle = FMath::Sin(Angle);
		
		FVector NodeLocation;
		NodeLocation.X = CosAngle * MapSpawnCircle + MapLocation.X;
		NodeLocation.Y = SinAngle * MapSpawnCircle + MapLocation.Y;
		NodeLocation.Z = 0.f;
		
		Room = WorldContextObject->SpawnActor<ANodeArea>(NodeLocation, FRotator(0.f), SpawnParams);
		
		//--== add actor to list of rooms in this instance of dungeon ==--
		NewMap->AddArea(Room);
	}
	
	//--==== space the rooms apart ====--
	//SeparationSteeringAlgorithm(Nodes, MapLocation, MapSpawnCircle, WorldContextObject);
	
	//--==== if there is no edge asset, it is assumed that no pathways are to be implemented ====--
	/*if (EdgeAsset != nullptr)
	{
		MinimumSpanningTreeAlgorithm(Nodes, DelaunayTriangulationAlgorithm(Nodes));
	}*/
}

void UProblematicFunctions::GenerateDungeonAndLoadLevel(FName levelToLoad, TArray<ANodeArea*> Nodes,
                                                        AEdgePathway* EdgeAsset, FVector2D MapLocation, float MapSpawnCircle, int32 RoomAmountToSpawn,
                                                        TArray<int32> FrequencyPerRoom, UWorld* WorldContextObject)
{
	//--==== check if the current game instance is the problematic game instance ====--
	if (UProblematicGameInstance* instance = Cast<UProblematicGameInstance>(WorldContextObject->GetGameInstance()))
	{
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
