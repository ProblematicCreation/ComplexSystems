// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Dungeon.generated.h"

class AEdgePathway;
class ANodeArea;

UCLASS()
class PROBLEMATICPLUGIN_API ADungeon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADungeon();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dungeon Map")
	FVector2D CentrePoint;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dungeon Map") 
	TArray<ANodeArea*> AllNodeAreas;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dungeon Map")
	TArray<AEdgePathway*> AllEdgePathways;
	
	UFUNCTION(BlueprintCallable, Category = "Dungeon Map")
	void AddArea(ANodeArea* Node);

	//--==== Getter Functions ====--
	UFUNCTION(BlueprintCallable, Category = "Dungeon Map")
	TArray<ANodeArea*> GetAllNodeAreas() { return AllNodeAreas;}
	UFUNCTION(BlueprintCallable, Category = "Dungeon Map")
	FVector2D GetCentrePoint() { return CentrePoint;}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
