// Fill out your copyright notice in the Description page of Project Settings.
#include "UnrealC++Classes/ProblematicGameInstance.h"

#include "UnrealC++Classes/ProblematicFunctions.h"


FCachedData::FCachedData()
{
	NodesAndFrequency.Empty();
	DungeonLocation = FVector2D::ZeroVector;
	NodeAreaAmountToSpawn = 0.f;
	NodeAreaSpawnRadius = 0.f;
	NodeAreaPerimeterMultiplier = 0.f;
	ObjectiveCount = 0;
	ObjectiveMesh = nullptr;
}

UProblematicGameInstance::UProblematicGameInstance()
{
	//ResetDungeonGenerationData();
	bShouldGenerateDungeonOnOpen = false; 
}

void UProblematicGameInstance::CachedDungeonToGenerate(TArray<FStoredAreaAndFrequency> AreasAndFrequency,
	FVector2D MapLocation, float MapSpawnCircle, float OuterPerimeterSizeMultiplier, int32 RoomAmountToSpawn,
	int32 ObjectivesCount, TSoftObjectPtr<UStaticMesh> ObjectiveMesh, TSubclassOf<UUserWidget> DisplayAfterCollectingAllObjectives)
{
	CachedData.NodesAndFrequency = AreasAndFrequency;
	CachedData.DungeonLocation = MapLocation;
	CachedData.NodeAreaAmountToSpawn = RoomAmountToSpawn;
	CachedData.NodeAreaSpawnRadius = MapSpawnCircle;
	CachedData.NodeAreaPerimeterMultiplier = OuterPerimeterSizeMultiplier;
	CachedData.ObjectiveCount = ObjectivesCount;
	CachedData.ObjectiveMesh = ObjectiveMesh;
	CachedData.DisplayAfterCollectingAllObjectives = DisplayAfterCollectingAllObjectives;
	
	bShouldGenerateDungeonOnOpen = true; 
}

void UProblematicGameInstance::ResetDungeonGenerationData()
{
	CachedData.DungeonLocation = FVector2D::ZeroVector;
	CachedData.NodeAreaAmountToSpawn = 0.f;
	CachedData.NodeAreaSpawnRadius = 0.f;
	CachedData.NodeAreaPerimeterMultiplier = 0.f;
	CachedData.NodesAndFrequency.Empty();
	CachedData.ObjectiveCount = 0;
	CachedData.ObjectiveMesh = nullptr;
	
	bShouldGenerateDungeonOnOpen = false; 
}
