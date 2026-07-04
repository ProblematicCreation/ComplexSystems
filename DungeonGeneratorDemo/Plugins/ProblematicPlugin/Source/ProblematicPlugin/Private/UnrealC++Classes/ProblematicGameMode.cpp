// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealC++Classes/ProblematicGameMode.h"

#include "Kismet/GameplayStatics.h"
#include "UnrealC++Classes/ProblematicFunctions.h"
#include "UnrealC++Classes/ProblematicGameInstance.h"

void AProblematicGameMode::BeginPlay()
{
	Super::BeginPlay();

	//If the game instance is set to the Problematic game instance class
	if (UProblematicGameInstance* InstanceRef = Cast<UProblematicGameInstance>(UGameplayStatics::GetGameInstance(GetWorld())))
	{
		if (InstanceRef->ShouldGenerateDungeonOnBeginBeginPlay())
		{
			ADungeon* NewDungeon = UProblematicFunctions::GenerateDungeonMap(
				InstanceRef->GetCachedDungeonData().NodesAndFrequency,
				InstanceRef->GetCachedDungeonData().DungeonLocation,
				InstanceRef->GetCachedDungeonData().NodeAreaSpawnRadius,
				InstanceRef->GetCachedDungeonData().NodeAreaPerimeterMultiplier,
				InstanceRef->GetCachedDungeonData().NodeAreaAmountToSpawn,
				InstanceRef->GetCachedDungeonData().ObjectiveCount,
				GetWorld(),
				InstanceRef->GetCachedDungeonData().ObjectiveMesh,
				InstanceRef->GetCachedDungeonData().DisplayAfterCollectingAllObjectives);

			//Enter the dungeon in the first room from the list of nodes and frequencies
			UProblematicFunctions::EnterDungeon(NewDungeon, GetWorld());
		}
	}
}
