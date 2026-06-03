// Fill out your copyright notice in the Description page of Project Settings.
#include "UnrealC++Classes/ProblematicGameInstance.h"
#include "UnrealC++Classes/ProblematicFunctions.h"


UProblematicGameInstance::UProblematicGameInstance()
{
	CachedEdgeAsset = nullptr;
	CachedMapLocation = FVector2D::ZeroVector;
	CachedNodeAreaAmountToSpawn = 0.f;
	CachedNodeAreaSpawnRadius = 0.f;
	CachedNodesAndFrequency.Empty();
}

void UProblematicGameInstance::CachedDungeonToGenerate(TArray<FAreaAndFrequency> NodesAndFrequency,
                                                       AEdgePathway* EdgeAsset, FVector2D MapLocation, float NodeAreaSpawnRadius, int32 NodeAreaAmountToSpawn,
                                                       UObject* WorldContextObject)
{
	CachedEdgeAsset = EdgeAsset;
	CachedMapLocation = MapLocation;
	CachedNodeAreaAmountToSpawn = NodeAreaAmountToSpawn;
	CachedNodeAreaSpawnRadius = NodeAreaSpawnRadius;
	CachedNodesAndFrequency = NodesAndFrequency;
}

void UProblematicGameInstance::GenerateDungeonOnOpen()
{
}
