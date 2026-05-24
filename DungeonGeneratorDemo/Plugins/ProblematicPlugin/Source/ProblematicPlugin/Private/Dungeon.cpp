// Fill out your copyright notice in the Description page of Project Settings.


#include "Dungeon.h"
#include "NodeArea.h"


// Sets default values
ADungeon::ADungeon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ADungeon::SetFocusedNodeArea(ANodeArea* Area)
{
	if (AllNodeAreas.Contains(Area))
	{
		
	}
	else
	{
		//the node is not a part of this dungeon map
	}
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

void ADungeon::Tick(float dt)
{
	Super::Tick(dt);
}



