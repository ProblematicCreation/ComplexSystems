// Fill out your copyright notice in the Description page of Project Settings.


#include "NodeArea.h"

#include "Components/BoxComponent.h"

// Sets default values
ANodeArea::ANodeArea()
{
	PrimaryActorTick.bCanEverTick = false;
	
	//--==== components ====--
	USceneComponent* Root = CreateDefaultSubobject<USceneComponent>("Root");
	SetRootComponent(Root);
}

void ANodeArea::BoundingBox(FBox2D& Inner, FBox2D& Outer, float OuterBoxScale)
{
	//--== get the bounds of this actor ==--
	FVector Origin;
	FVector Extents;
	GetActorBounds(false, Origin, Extents);
	
	FVector2D Extents2D = FVector2D(Extents.X, Extents.Y);
	FVector2D Origin2D = FVector2D(Origin.X, Origin.Y);
	
	Inner.Min = Origin2D - Extents2D; 
	Inner.Max = Origin2D + Extents2D;
	
	Outer.Min = Inner.Min * OuterBoxScale;
	Outer.Max = Inner.Max * OuterBoxScale;
}


// Called when the game starts or when spawned
void ANodeArea::BeginPlay()
{
	Super::BeginPlay();
}

