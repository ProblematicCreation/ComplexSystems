// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "NodeAreaTeleporter.generated.h"


class UBoxComponent;
class ANodeArea;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PROBLEMATICPLUGIN_API UNodeAreaTeleporter : public USceneComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UNodeAreaTeleporter();

	//--==== Getters ====--
	UBoxComponent* GetCollisionBox() { return CollisionBox; }
	ANodeArea* GetConnectedNodeArea() { return ConnectingNodeArea; }
	
	//--==== Setters ====--
	void SetNodeAreaToTeleport(ANodeArea* NodeAreaToTeleport) { ConnectingNodeArea = NodeAreaToTeleport; }

	//
	UFUNCTION()
	void OnBoxOverlapBegin(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void InitialSetup(ANodeArea* NodeAreaToTeleport, UBoxComponent* Collision);
	void FinalisedSetup(FVector CollisionLocation);

	UPROPERTY(VisibleAnywhere, Category = "Problematic Portal")
	UBoxComponent* CollisionBox;
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	ANodeArea* ConnectingNodeArea;
	UPROPERTY()
	ACharacter* PlayerCharRef;

};
