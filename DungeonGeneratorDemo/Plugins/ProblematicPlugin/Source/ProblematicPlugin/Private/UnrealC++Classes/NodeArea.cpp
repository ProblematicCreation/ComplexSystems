// Fill out your copyright notice in the Description page of Project Settings.
#include "UnrealC++Classes/NodeArea.h"
#include "Components/BoxComponent.h"
#include "UnrealC++Classes/NodeAreaTeleporter.h"

// Sets default values
ANodeArea::ANodeArea()
{
	PrimaryActorTick.bCanEverTick = false;
	
	//--==== components ====--
	USceneComponent* Root = CreateDefaultSubobject<USceneComponent>("Root");
	SetRootComponent(Root);
}

FVector2D ANodeArea::GetCenter2DLocation()
{
	if (InnerPerimeter.bIsValid)
	{
		return InnerPerimeter.GetCenter();
	}
	
	return FVector2D(0);
}

void ANodeArea::BoundingBox(FBox2D& Inner, FBox2D& Outer, float OuterBoxScale)
{
	//--== get the bounds of this actor ==--
	FVector Origin;
	FVector Extents;
	GetActorBounds(false, Origin, Extents);
	
	FVector2D Extents2D = FVector2D(Extents.X, Extents.Y);
	FVector2D Origin2D = FVector2D(Origin.X, Origin.Y);
	
	//bottom left
	Inner.Min = Origin2D - Extents2D; 
	//top right
	Inner.Max = Origin2D + Extents2D;
	
	Outer.Min = Inner.Min * OuterBoxScale;
	Outer.Max = Inner.Max * OuterBoxScale;
	
}


void ANodeArea::GenerateTeleporter(ANodeArea* ConnectedNode)
{
	UNodeAreaTeleporter* Portal = NewObject<UNodeAreaTeleporter>(this, UNodeAreaTeleporter::StaticClass());

	if (IsValid(Portal))
	{
		Portal->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
		Portal->RegisterComponent();
		this->AddInstanceComponent(Portal);
		
		UBoxComponent* CollisionBox = NewObject<UBoxComponent>(this, UBoxComponent::StaticClass());
		if (IsValid(CollisionBox))
		{
			CollisionBox->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
			CollisionBox->RegisterComponent();
			this->AddInstanceComponent(CollisionBox);
		}
		
		Portal->InitialSetup(ConnectedNode, CollisionBox);
		
		Portals.Add(Portal);
	}
}

void ANodeArea::FinaliseTeleporterSetup()
{
	FVector Origin;
	FVector Extents;
	GetActorBounds(false, Origin, Extents);
	TArray<FVector> PortalLocations;
	int32 PortalLocationsCount = Portals.Num();
	
	if (Portals.Num() > 1)
	{
		//--==== if the portal count is odd ====--
		if (PortalLocationsCount & 1)
		{
			//--== add portal in the center ==--
			FVector CenterLocation = FVector(Origin.X, Origin.Y + (Extents.Y / 1.5f), Origin.Z);
			PortalLocations.Add(CenterLocation);
			PortalLocationsCount--;
		}

		float XLocation = Extents.X / PortalLocationsCount;
		int32 HalfRemainingPortals = PortalLocationsCount / 2;
		float PreviousPortalOffset = 0;
		
		for (int32 i = PortalLocationsCount; i > 0; i--)
		{
			FVector PortalLocation;
			
			if (HalfRemainingPortals <= 0)
			{
				if (HalfRemainingPortals == 0)
				{
					PortalLocation = FVector((Origin.X) - XLocation, Origin.Y + (Extents.Y / 1.5f), Origin.Z );
				}
				else
				{
					PortalLocation = FVector((PreviousPortalOffset) - XLocation, Origin.Y+ (Extents.Y / 1.5f), Origin.Z);
				}
			}
			else
			{
				if (i == PortalLocationsCount)
				{
					PortalLocation = FVector((Origin.X) + XLocation, Origin.Y + (Extents.Y / 1.5f), Origin.Z);
				}
				else
				{
					PortalLocation = FVector((PreviousPortalOffset) + XLocation, Origin.Y + (Extents.Y / 1.5f), Origin.Z);
				}
			}
			
			PreviousPortalOffset = PortalLocation.X;
			PortalLocations.Add(PortalLocation);
			HalfRemainingPortals--;
		}
	}

	
	for (int i = 0; i < Portals.Num(); i++)
	{
		//--==== if there is only 1 connection ====--
		if (Portals.Num() == 1)
		{
			Portals[i]->FinalisedSetup(FVector(Origin.X, Origin.Y + (Extents.Y / 1.5f), Origin.Z));
			break;
		}
		
		Portals[i]->FinalisedSetup(PortalLocations[i]);
	}
}

// Called when the game starts or when spawned
void ANodeArea::BeginPlay()
{
	Super::BeginPlay();
}

