// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProblematicFunctions.generated.h"

/**
 * 
 */
UCLASS()
class PROBLEMATICPLUGIN_API UProblematicFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	void GenerateDungeonMap();
	
	void GenerateDungeonAndLoadLevel(FName levelToLoad);
};
