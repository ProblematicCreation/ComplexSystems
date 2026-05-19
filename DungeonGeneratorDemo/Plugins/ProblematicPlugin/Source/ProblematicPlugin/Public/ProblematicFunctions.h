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
UCLASS()
class PROBLEMATICPLUGIN_API UProblematicFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Problematic Functions") void GenerateDungeonMap(TArray<ANodeArea*> Nodes, AEdgePathway* EdgeAsset, FVector2D MapLocation, float MapSpawnCircle,int32 RoomAmountToSpawn, TArray<int32> FrequencyPerRoom, UWorld* WorldContextObject);
	
	UFUNCTION(BlueprintCallable, Category = "Problematic Functions") void GenerateDungeonAndLoadLevel(FName levelToLoad, TArray<ANodeArea*> Nodes, AEdgePathway* EdgeAsset, FVector2D MapLocation, float MapSpawnCircle, int32 RoomAmountToSpawn, TArray<int32> FrequencyPerRoom,UWorld* WorldContextObject);
	
private:
	void MinimumSpanningTreeAlgorithm(TArray<ANodeArea*> Nodes, TArray<FVector2D> Edges);
	TArray<FVector2D> DelaunayTriangulationAlgorithm(TArray<ANodeArea*> Nodes);
	void SeparationSteeringAlgorithm(TArray<ANodeArea*> Nodes, FVector2D MapLocation, float MapSpawnCircle, float HalfSpaceBetweenAreas, UWorld* WorldContextObject);
};
