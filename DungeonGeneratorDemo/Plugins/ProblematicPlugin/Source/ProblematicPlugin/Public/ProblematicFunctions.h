// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProblematicFunctions.generated.h"

class ANodeArea;
class AEdgePathway;

/**
 * 
 */
USTRUCT(BlueprintType)
struct FAreaAndFrequency
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FrequencyMinimum;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ANodeArea> NodeAreaClass;
};

UCLASS()
class PROBLEMATICPLUGIN_API UProblematicFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Problematic Functions") 
	static void GenerateDungeonMap(
	TArray<FAreaAndFrequency> AreasAndFrequency, AEdgePathway* EdgeAsset, 
	FVector2D MapLocation, float MapSpawnCircle, float OuterPerimeterSizeMultiplier, int32 RoomAmountToSpawn, 
	UObject* WorldContextObject);
	
	UFUNCTION(BlueprintCallable, Category = "Problematic Functions") 
	static void GenerateDungeonAndLoadLevel(FName levelToLoad, TArray<FAreaAndFrequency> NodesAndFrequency, AEdgePathway* EdgeAsset, FVector2D MapLocation, float MapSpawnCircle, int32 RoomAmountToSpawn, UObject* WorldContextObject);
	
private:
	static TArray<FVector2D> MinimumSpanningTreeAlgorithm(TArray<ANodeArea*> Nodes, TArray<FVector2D> Edges);
	static TArray<FVector2D> DelaunayTriangulationAlgorithm(TArray<ANodeArea*> Nodes, ADungeon* DungeonMap);
	static void SeparationSteeringAlgorithm(TArray<ANodeArea*> Nodes, float HalfSpaceBetweenAreas);
};
