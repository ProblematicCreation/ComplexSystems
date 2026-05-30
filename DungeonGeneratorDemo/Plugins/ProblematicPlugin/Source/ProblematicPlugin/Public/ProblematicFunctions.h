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
};

USTRUCT(BlueprintType)
struct FTriangle
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Vertex1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Vertex2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Vertex3;
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
	static TArray<FDelaunayEdge> DelaunayTriangulationAlgorithm(TArray<ANodeArea*> Nodes, ADungeon* DungeonMap);
	static void SeparationSteeringAlgorithm(TArray<ANodeArea*> Nodes, float HalfSpaceBetweenAreas);
	
	//--==== delaunay triangulation data ====--
	struct FQuadEdgeRef
	{
		FVector2D Data;
		FQuadEdgeRef* Next; //points to an edge that has the same start pos (vertex or face node), the next counter-clockwise edge to this one   
		FQuadEdgeRef* Rotate; 
	};
	
	static FQuadEdgeRef *Rotate(FQuadEdgeRef* Edge) { return Edge->Rotate; } //rot
	static FQuadEdgeRef *SymmetricEdge(FQuadEdgeRef* Edge) { return Edge->Rotate->Rotate; } //sym
	static FQuadEdgeRef *RotateOtherWay(FQuadEdgeRef* Edge) { return Edge->Rotate->Rotate->Rotate; } //tor
	static FQuadEdgeRef* GetPreviousEdge(FQuadEdgeRef* Edge) { return Edge->Rotate->Next->Rotate; }
	static FQuadEdgeRef* LeftOfCurrentEdge(FQuadEdgeRef* Edge) {return RotateOtherWay(Edge)->Next->Rotate; }
	
	static FVector2D Destination(FQuadEdgeRef* Edge) { return SymmetricEdge(Edge)->Data; }

	static FQuadEdgeRef* MakeQuadEdge(FVector2D Start, FVector2D End);
	
	static void SwapNexts(FQuadEdgeRef* A, FQuadEdgeRef* B);
	static void Splice(FQuadEdgeRef* A, FQuadEdgeRef* B);

	//--== Generate a triangle using 3 FVector2D points ==--
	static void MakeTriangle(FVector2D A, FVector2D B, FVector2D C);

	//--== Connect 2 Quad-Edge-References together ==--
	static FQuadEdgeRef* Connect(FQuadEdgeRef* A, FQuadEdgeRef* B);

	//--== remove the connected edge ==--
	static void SeverEdge(FQuadEdgeRef* Edge);

	//--== add 2d point vector of node position
	static FQuadEdgeRef* InsertPoint(FQuadEdgeRef* PolygonEdge, FVector2D NodeLocation);

	//--== fundmental feature ==--
	static void FlipDiagonalEdge(FQuadEdgeRef* Edge);

	static float Determinant3x3(FMatrix3x3 Matrix); 

	static void AddVertex(FVector2D Vertex, TArray<DelaunayTriangle*> &Triangles);
	
	static TArray<FDelaunayEdge> UniqueEdges(TArray<FDelaunayEdge> Edges);

	static bool EquivelentEdges(FDelaunayEdge Edge1, FDelaunayEdge Edge2);

	static bool ShouldDestroyTriangle(DelaunayTriangle* Triangle, FVector2D V1, FVector2D V2, FVector2D V3);
};
