// Fill out your copyright notice in the Description page of Project Settings.


#include "ProblematicFunctions.h"

#include "Kismet/GameplayStatics.h"

void UProblematicFunctions::GenerateDungeonAndLoadLevel(FName levelToLoad)
{
	FLatentActionInfo latentInfo;
	UGameplayStatics::OpenLevel(GetWorld(), levelToLoad);
}
