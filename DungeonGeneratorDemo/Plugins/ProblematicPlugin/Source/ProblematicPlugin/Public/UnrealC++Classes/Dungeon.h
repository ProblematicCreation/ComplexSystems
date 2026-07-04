// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Dungeon.generated.h"

class AEdgePathway;
class ANodeArea;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnObjectiveCompleted);

UCLASS()
class PROBLEMATICPLUGIN_API ADungeon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADungeon();
	ADungeon(UUserWidget* WinScreenWidget);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dungeon Map")
	FVector2D CentrePoint;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dungeon Map") 
	TArray<ANodeArea*> AllNodeAreas;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dungeon Map")
	TArray<AEdgePathway*> AllEdgePathways;

	UPROPERTY(BlueprintAssignable, Category = "Dungeon Map")
	FOnObjectiveCompleted OnObjectiveCompleted;
	
	UFUNCTION(BlueprintCallable, Category = "Dungeon Map")
	void AddArea(ANodeArea* Node);

	//--==== GETTERS ====--
	UFUNCTION(BlueprintCallable, Category = "Dungeon Map")
	TArray<ANodeArea*> GetAllNodeAreas() { return AllNodeAreas;}
	UFUNCTION(BlueprintCallable, Category = "Dungeon Map")
	FVector2D GetCentrePoint() { return CentrePoint;}

	UFUNCTION(BlueprintCallable, Category = "Dungeon Map")
	int32 GetRemainingObjectivesCount() {return ObjectiveRemainingCount;}
	UFUNCTION(BlueprintCallable, Category = "Dungeon Map")
	UUserWidget* GetWinDisplay() { return WinDisplay;}


	//--==== SETTERS ====--

	UFUNCTION(BlueprintCallable, Category = "Dungeon Map")
	void SetObjectiveCount(int32 Objectives) { ObjectiveRemainingCount = Objectives; }
	UFUNCTION(BlueprintCallable, Category = "Dungeon Map")
	void SetWinDisplay(UUserWidget* WinWidget) { WinDisplay = WinWidget; }

	
	//--==== Standard Functions ====--
	
	UFUNCTION(BlueprintCallable, Category = "Dungeon Map")
	void DecrementObjectiveRemainingCount();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	int32 ObjectiveRemainingCount;

	UPROPERTY()
	UUserWidget* WinDisplay;
};
