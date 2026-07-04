// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealC++Classes/Dungeon.h"

#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "UnrealC++Classes/NodeArea.h"

// Sets default values
ADungeon::ADungeon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	ObjectiveRemainingCount = 0;
	WinDisplayClass = nullptr;
	WinDisplayWidget = nullptr;
}

ADungeon::ADungeon(TSubclassOf<UUserWidget> WinScreenWidget)
{
	ObjectiveRemainingCount = 0;
	WinDisplayClass = WinScreenWidget;
	WinDisplayWidget = nullptr;
}

void ADungeon::AddArea(ANodeArea* Node)
{
	AllNodeAreas.Add(Node);
}

void ADungeon::DecrementObjectiveRemainingCount()
{
	ObjectiveRemainingCount--;
	
	if (ObjectiveRemainingCount <= 0)
	{
		OnObjectiveCompleted.Broadcast();
		
		//if the WinDisplay widget was set
		if (WinDisplayWidget)
		{
			WinDisplayWidget->AddToViewport();
			
			//get reference to teh controller
			if (APlayerController* ControllerRef = UGameplayStatics::GetPlayerController(GetWorld(), 0))
			{
				FInputModeUIOnly InputMode;
				ControllerRef->SetInputMode(InputMode);
				ControllerRef->SetShowMouseCursor(true);
				ControllerRef->SetPause(true);
			}
		}
		else
		{
			//get reference to teh controller
			if (APlayerController* ControllerRef = UGameplayStatics::GetPlayerController(GetWorld(), 0))
			{
				WinDisplayWidget = CreateWidget<UUserWidget>(ControllerRef, WinDisplayClass);
				WinDisplayWidget->AddToViewport();
				
				FInputModeUIOnly InputMode;
				ControllerRef->SetInputMode(InputMode);
				ControllerRef->SetShowMouseCursor(true);
				ControllerRef->SetPause(true);
			}
		}
	}
}

// Called when the game starts or when spawned
void ADungeon::BeginPlay()
{
	Super::BeginPlay();
	
}



