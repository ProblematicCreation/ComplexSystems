// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PureC++Classes/DelaunayEdge.h"
#include "NodeArea.generated.h"

class UNodeAreaTeleporter;
class UBoxComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnObjectiveCollected);

UCLASS()
class PROBLEMATICPLUGIN_API ANodeArea : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANodeArea();

	//--==== Getters ====--
	UFUNCTION(BlueprintCallable, Category = "Problematic Node")
	FVector2D Get2DLocation() { return FVector2D(GetActorLocation().X, GetActorLocation().Y); }
	FVector2D GetCenter2DLocation();
	TArray<DelaunayEdge*> GetConnectedEdges() { return ConnectedEdges; }

	void BoundingBox(FBox2D& Inner, FBox2D& Outer, float OuterBoxScale);
	
	UFUNCTION(BlueprintCallable, Category = "Problematic Node")
	FBox2D GetInnerPerimeter() { return InnerPerimeter; }
	UFUNCTION(BlueprintCallable, Category = "Problematic Node")
	FBox2D GetOuterPerimeter() { return OuterPerimeter; }
	
	UFUNCTION(BlueprintCallable, Category = "Problematic Node")
	void SetInnerAndOuterPerimeter( FBox2D Inner, FBox2D Outer) {InnerPerimeter = Inner; OuterPerimeter = Outer; }

	void AddConnectedEdge(DelaunayEdge* Edge) { ConnectedEdges.Add(Edge); }
	void RemoveConnectedEdge(DelaunayEdge* Edge) { ConnectedEdges.Remove(Edge); }

	//--==== Setters ====--

	UFUNCTION(BlueprintCallable, Category = "Problematic Node")
	void SetParentDungeon(class ADungeon* Parent);
	
	//--==== Standard Functions ====--
	void GenerateTeleporter(ANodeArea* ConnectedNode);
	void FinaliseTeleporterSetup();
	void AddObjectiveComponent();
	void AddObjectiveComponentWithMesh(UStaticMesh* Mesh);
	UFUNCTION()
	void OnObjectiveBeginOverlap(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	//--==== Variables ====--
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Problematic Node")
	UMaterialInterface* TeleporterMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Problematic Node")
	UStaticMesh* TeleporterMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Problematic Node")
	FVector TeleporterScale;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Problematic Node")
	UStaticMesh* ObjectiveMesh;

	UPROPERTY(BlueprintAssignable, Category = "Problematic Node")
	FOnObjectiveCollected OnObjectiveCollected;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
private:
	TArray<FVector2D> DoorwayLocations;
	UPROPERTY()
	TArray<UNodeAreaTeleporter*> Portals;
	FBox2D InnerPerimeter;
	FBox2D OuterPerimeter;
	TArray<DelaunayEdge*> ConnectedEdges;

	UPROPERTY()
	class ADungeon* ParentDungeon;

};
