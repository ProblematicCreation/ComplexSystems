// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NodeArea.generated.h"

UCLASS()
class PROBLEMATICPLUGIN_API ANodeArea : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANodeArea();
	
	FVector2D GetSize();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
private:
	FVector2D AreaSize;
	TArray<FVector2D> DoorwayLocations;

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

};
