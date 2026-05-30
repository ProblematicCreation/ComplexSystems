// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NodeArea.generated.h"

class UBoxComponent;

UCLASS()
class PROBLEMATICPLUGIN_API ANodeArea : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANodeArea();

	UFUNCTION(BlueprintCallable)
	FVector2D Get2DLocation() { return FVector2D(GetActorLocation().X, GetActorLocation().Y); }

	void BoundingBox(FBox2D& Inner, FBox2D& Outer, float OuterBoxScale);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere)
	UBoxComponent* CollisionBox;
	
private:
	TArray<FVector2D> DoorwayLocations;
	

};
