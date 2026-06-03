// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EdgePathway.generated.h"

UCLASS()
class PROBLEMATICPLUGIN_API AEdgePathway : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEdgePathway();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
