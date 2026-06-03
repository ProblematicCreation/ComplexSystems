// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealC++Classes/Dungeon.h"
#include "UnrealC++Classes/NodeArea.h"

// Sets default values
ADungeon::ADungeon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

void ADungeon::AddArea(ANodeArea* Node)
{
	AllNodeAreas.Add(Node);
}

// Called when the game starts or when spawned
void ADungeon::BeginPlay()
{
	Super::BeginPlay();
	
}



