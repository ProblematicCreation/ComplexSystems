// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ProblematicGameInstance.generated.h"

struct FAreaAndFrequency;
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
	UProblematicGameInstance();

	
	UFUNCTION(BlueprintCallable, Category = "Problematic Instance Functions")
	void CachedDungeonToGenerate(
		TArray<FAreaAndFrequency> NodesAndFrequency, AEdgePathway* EdgeAsset, 
		FVector2D MapLocation, float NodeAreaSpawnRadius, 
		int32 NodeAreaAmountToSpawn, UObject* WorldContextObject);
	
	UFUNCTION(BlueprintCallable, Category = "Problematic Instance Functions")
	void GenerateDungeonOnOpen();
	
private:
	TArray<FAreaAndFrequency> CachedNodesAndFrequency;
	UPROPERTY() AEdgePathway* CachedEdgeAsset;
	FVector2D CachedMapLocation;
	float CachedNodeAreaSpawnRadius;
	int32 CachedNodeAreaAmountToSpawn;
};
