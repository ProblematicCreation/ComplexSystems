// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ProblematicGameInstance.generated.h"

class AEdgePathway;
class ANodeArea;
/**
 * 
 */
UCLASS()
class PROBLEMATICPLUGIN_API UProblematicGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Problematic Instance Functions")
	void CachedDungeonToGenerate(
		TArray<ANodeArea*> Nodes, AEdgePathway* EdgeAsset, 
		FVector2D MapLocation, float NodeAreaSpawnRadius, 
		int32 NodeAreaAmountToSpawn, TArray<int32> SpawnFrequencyPerRoom);
	
	UFUNCTION(BlueprintCallable, Category = "Problematic Instance Functions")
	void GenerateDungeonOnOpen();
	
private:
	UPROPERTY()
	TArray<ANodeArea*> CachedNodes;
	AEdgePathway* CachedEdgeAsset;
	FVector2D CachedMapLocation;
	float CachedNodeAreaSpawnRadius;
	int32 CachedNodeAreaAmountToSpawn;
	TArray<int32> CachedSpawnFrequencyPerRoom;
};
