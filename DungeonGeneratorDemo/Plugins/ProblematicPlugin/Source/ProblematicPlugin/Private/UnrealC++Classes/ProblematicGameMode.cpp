// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealC++Classes/ProblematicGameMode.h"
#include "UnrealC++Classes/NodeArea.h"
#include "Kismet/GameplayStatics.h"
#include "UnrealC++Classes/ProblematicFunctions.h"
#include "UnrealC++Classes/ProblematicGameInstance.h"

void AProblematicGameMode::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(TimerHandle, this, &AProblematicGameMode::GenerateDungeonOnBegin, 0.2f, false);
}

void AProblematicGameMode::GenerateDungeonOnBegin()
{
	//If the game instance is set to the Problematic game instance class
	if (UProblematicGameInstance* InstanceRef = Cast<UProblematicGameInstance>(UGameplayStatics::GetGameInstance(GetWorld())))
	{
		if (InstanceRef->ShouldGenerateDungeonOnBeginBeginPlay())
		{
			TArray<FAreaAndFrequency> ConvertedData;
			
			for (FStoredAreaAndFrequency Element : InstanceRef->GetCachedDungeonData().NodesAndFrequency)
			{
				FAreaAndFrequency NewElement;
				
				NewElement.FrequencyMinimum = Element.Frequency;
				NewElement.NodeAreaClass = Element.Area.LoadSynchronous();
				
				ConvertedData.Add(NewElement);
			}
			
			ADungeon* NewDungeon = UProblematicFunctions::GenerateDungeonMap(
				ConvertedData,
				InstanceRef->GetCachedDungeonData().DungeonLocation,
				InstanceRef->GetCachedDungeonData().NodeAreaSpawnRadius,
				InstanceRef->GetCachedDungeonData().NodeAreaPerimeterMultiplier,
				InstanceRef->GetCachedDungeonData().NodeAreaAmountToSpawn,
				InstanceRef->GetCachedDungeonData().ObjectiveCount,
				GetWorld(),
				InstanceRef->GetCachedDungeonData().ObjectiveMesh.LoadSynchronous(),
				InstanceRef->GetCachedDungeonData().DisplayAfterCollectingAllObjectives
				);
			

			InstanceRef->ResetDungeonGenerationData();

			UProblematicFunctions::EnterDungeon(NewDungeon, GetWorld());
		}
	}
}
