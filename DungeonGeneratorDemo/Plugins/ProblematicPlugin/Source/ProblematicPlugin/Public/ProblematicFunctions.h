// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProblematicFunctions.generated.h"

class DelaunayTriangle;
class ADungeon;
class ANodeArea;
class AEdgePathway;
struct FQuad_Edge;
struct FQuad_Edge_Ref;

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

USTRUCT(BlueprintType)
struct FMatrix3x3
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "Mathematics")
	FVector Row1;
	UPROPERTY(BlueprintReadWrite, Category = "Mathematics")
	FVector Row2;
	UPROPERTY(BlueprintReadWrite, Category = "Mathematics")
	FVector Row3;
};

USTRUCT(BlueprintType)
struct FDelaunayEdge
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D StartPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D EndPoint;
	
	bool operator==(const FDelaunayEdge& Other) const
	{
		return (Other.StartPoint == StartPoint && Other.EndPoint == EndPoint) || (Other.StartPoint == EndPoint && Other.EndPoint == StartPoint);
	}
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
	static void GenerateDungeonAndLoadLevel(FName LevelToLoad, TArray<FAreaAndFrequency> NodesAndFrequency, AEdgePathway* EdgeAsset, FVector2D MapLocation, float MapSpawnCircle, int32 RoomAmountToSpawn, UObject* WorldContextObject);
	
private:
	static TArray<FVector2D> MinimumSpanningTreeAlgorithm(TArray<ANodeArea*> Nodes, TArray<FVector2D> Edges);
	static TArray<FDelaunayEdge> DelaunayTriangulationAlgorithm(TArray<ANodeArea*> Nodes, ADungeon* DungeonMap, UObject* WorldContextObject);
	static void SeparationSteeringAlgorithm(TArray<ANodeArea*> Nodes, float HalfSpaceBetweenAreas);
	
	

	static float Determinant3x3(FMatrix3x3 Matrix); 

	static void AddVertex(FVector2D Vertex, TArray<DelaunayTriangle*> &Triangles, UObject* WorldContextObject);
	
	static TArray<FDelaunayEdge> UniqueEdges(TArray<FDelaunayEdge> Edges);

	static bool EquivelentEdges(FDelaunayEdge Edge1, FDelaunayEdge Edge2);

	static bool ShouldDestroyTriangle(DelaunayTriangle* Triangle, FVector2D V1, FVector2D V2, FVector2D V3);
	static TArray<FDelaunayEdge> RemoveOverlappingEdges(TArray<FDelaunayEdge> Edges);
};
