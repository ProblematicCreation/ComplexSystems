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
USTRUCT(BlueprintType)
struct FCachedData
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAreaAndFrequency> NodesAndFrequency;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D DungeonLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NodeAreaSpawnRadius;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NodeAreaPerimeterMultiplier;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NodeAreaAmountToSpawn;
};

UCLASS()
class PROBLEMATICPLUGIN_API UProblematicGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UProblematicGameInstance();

	
	UFUNCTION(BlueprintCallable, Category = "Problematic Instance Functions")
	void CachedDungeonToGenerate(
		TArray<FAreaAndFrequency> AreasAndFrequency,
		FVector2D MapLocation, float MapSpawnCircle,
		float OuterPerimeterSizeMultiplier, int32 RoomAmountToSpawn);
	
	UFUNCTION(BlueprintCallable, Category = "Problematic Instance Functions")
	FCachedData GetCachedDungeonData() { return CachedData;}

	UFUNCTION(BlueprintCallable, Category = "Problematic Instance Functions")
	void ResetDungeonGenerationData();

	UFUNCTION(BlueprintCallable, Category = "Problematic Instance Functions")
	bool ShouldGenerateDungeonOnBeginBeginPlay() {return bShouldGenerateDungeonOnOpen; }

private:
	bool bShouldGenerateDungeonOnOpen;
	
	FCachedData CachedData;
};
