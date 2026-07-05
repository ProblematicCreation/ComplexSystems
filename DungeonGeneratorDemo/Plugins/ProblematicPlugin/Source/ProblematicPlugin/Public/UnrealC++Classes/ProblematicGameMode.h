// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ProblematicGameMode.generated.h"

struct FAreaAndFrequency;
/**
 * 
 */
UCLASS()
class PROBLEMATICPLUGIN_API AProblematicGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	void GenerateDungeonOnBegin();

private:
	FTimerHandle TimerHandle;
	
};
