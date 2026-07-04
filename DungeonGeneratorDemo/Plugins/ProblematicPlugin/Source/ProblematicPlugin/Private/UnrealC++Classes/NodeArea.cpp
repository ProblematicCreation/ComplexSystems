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
	
    TeleporterScale = FVector(1.f);
	ObjectiveMesh = nullptr;
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
		
		UStaticMeshComponent* PortalMesh = NewObject<UStaticMeshComponent>(this, UStaticMeshComponent::StaticClass());
		
		if (IsValid(PortalMesh))
		{
			PortalMesh->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
			PortalMesh->RegisterComponent();
			this->AddInstanceComponent(PortalMesh);

			if (TeleporterMesh != nullptr)
			{
				PortalMesh->SetStaticMesh(TeleporterMesh);
			}
			if (TeleporterMaterial != nullptr)
			{
				PortalMesh->SetMaterial(0, TeleporterMaterial);
			}
			if (TeleporterScale != FVector(0))
			{
				PortalMesh->SetWorldScale3D(TeleporterScale);
			}
		}
		
		Portal->InitialSetup(ConnectedNode, PortalMesh);
		
		
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
		bool ShouldUseOppositeWall = false;
		float IndividualPortalExtentX = Portals[0]->GetPortalMesh()->Bounds.GetBox().GetExtent().X;
		float WidthOfPortalsCombined = (IndividualPortalExtentX * 2.f) * Portals.Num();
		
		//--==== determine if the width of all the portals combined is greater than the width of the wall ====--
		if (WidthOfPortalsCombined * 1.1f > Extents.X * 2.f)
		{
			ShouldUseOppositeWall = true;
		}
		bool WasOdd = false;
		//--==== if the portal count is odd ====--
		if (PortalLocationsCount & 1)
		{
			//--== add portal in the center ==--
			FVector CenterLocation = FVector(Origin.X, Origin.Y + (Extents.Y / 1.5f), Origin.Z);
			PortalLocations.Add(CenterLocation);
			WasOdd = true;
			PortalLocationsCount--;
		}

		float XLocation = Extents.X / PortalLocationsCount;
		int32 HalfRemainingPortals = PortalLocationsCount / 2;
		int32 FirstQuarter = HalfRemainingPortals / 2;
		int32 ThirdQuarter = FirstQuarter;
		float PreviousPortalOffset = 0;
		
		if (ShouldUseOppositeWall)
		{
			XLocation = Extents.X / HalfRemainingPortals;
		}
		
		
		for (int32 i = PortalLocationsCount; i > 0; i--)
		{
			FVector PortalLocation;
			
			//------======== Split the portals between 2 walls ========------
			if (ShouldUseOppositeWall)
			{
				//--== 1st wall ==--
				if (HalfRemainingPortals > 0)
				{
					//--== second quarter ==--
					if (FirstQuarter <= 0)
					{
						// 1st of second quarter
						if (FirstQuarter == 0)
						{
							if (WasOdd && (Portals.Num() - 1 / 2.f) > 2)
							{
								PortalLocation = FVector(Origin.X - XLocation - IndividualPortalExtentX, Origin.Y + (Extents.Y / 1.5f), Origin.Z );
							}
							else
							{
								PortalLocation = FVector(Origin.X - XLocation, Origin.Y + (Extents.Y / 1.5f), Origin.Z );
							}
						}
						else
						{
							PortalLocation = FVector(PreviousPortalOffset - XLocation - IndividualPortalExtentX, Origin.Y+ (Extents.Y / 1.5f), Origin.Z);
						}
					}
					else //--== first quarter ==--
					{
						// if it's the first portal
						if (i == PortalLocationsCount)
						{
							if (WasOdd && (Portals.Num() - 1 / 2.f) > 2)
							{
								PortalLocation = FVector((Origin.X) + XLocation + IndividualPortalExtentX, Origin.Y + (Extents.Y / 1.5f), Origin.Z);
							}
							else
							{
								PortalLocation = FVector((Origin.X) + XLocation, Origin.Y + (Extents.Y / 1.5f), Origin.Z);
							}
						}
						else
						{
							PortalLocation = FVector(PreviousPortalOffset + XLocation + IndividualPortalExtentX, Origin.Y + (Extents.Y / 1.5f), Origin.Z);
						}
					}
					FirstQuarter--;
				}
				else //--== 2nd wall ==--
				{
					//--== fourth quarter ==--
					if (ThirdQuarter <= 0)
					{
						// first of 4th quarter
						if (ThirdQuarter == 0)
						{
							if (WasOdd && (Portals.Num() - 1 / 2.f) > 2)
							{
								PortalLocation = FVector(Origin.X - XLocation - IndividualPortalExtentX, Origin.Y - (Extents.Y / 1.5f), Origin.Z );
							}
							else
							{
								PortalLocation = FVector(Origin.X - XLocation, Origin.Y - (Extents.Y / 1.5f), Origin.Z );
							}
						}
						else
						{
							PortalLocation = FVector(PreviousPortalOffset - XLocation - IndividualPortalExtentX, Origin.Y - (Extents.Y / 1.5f), Origin.Z);
						}
					}
					else //--== third quarter ==--
					{
						//first in 3rd quarter
						if(HalfRemainingPortals == 0)
						{
							if (WasOdd && (Portals.Num() - 1 / 2.f) > 2)
							{
								PortalLocation = FVector(Origin.X + XLocation + IndividualPortalExtentX, Origin.Y - (Extents.Y / 1.5f), Origin.Z);
							}
							else
							{
								PortalLocation = FVector(Origin.X + XLocation, Origin.Y - (Extents.Y / 1.5f), Origin.Z);
							}
						}
						else
						{
							PortalLocation = FVector(PreviousPortalOffset + XLocation + IndividualPortalExtentX, Origin.Y - (Extents.Y / 1.5f), Origin.Z);
						}
					}
					ThirdQuarter--;
				}
			}
			else //------======== ONLY ONE WALL ========------
			{
				//--==== right side ====--
				if (HalfRemainingPortals <= 0)
				{
					//if it's the first portal on left side
					if (HalfRemainingPortals == 0)
					{
						if (WasOdd && Portals.Num() - 1 > 2)
						{
							PortalLocation = FVector((Origin.X) - XLocation - IndividualPortalExtentX, Origin.Y + (Extents.Y / 1.5f), Origin.Z );
						}
						else
						{
							PortalLocation = FVector((Origin.X) - XLocation, Origin.Y + (Extents.Y / 1.5f), Origin.Z );
						}
					}
					else
					{
						PortalLocation = FVector((PreviousPortalOffset) - XLocation - IndividualPortalExtentX, Origin.Y+ (Extents.Y / 1.5f), Origin.Z);
					}
				}
				else//--==== left side ====--
				{
					// if it's the 1st portal
					if (i == PortalLocationsCount)
					{
						if (WasOdd && Portals.Num() - 1 > 2)
						{
							PortalLocation = FVector((Origin.X) + XLocation + IndividualPortalExtentX, Origin.Y + (Extents.Y / 1.5f), Origin.Z);
						}
						else
						{
							PortalLocation = FVector((Origin.X) + XLocation, Origin.Y + (Extents.Y / 1.5f), Origin.Z);
						}
					}
					else
					{
						PortalLocation = FVector((PreviousPortalOffset) + XLocation + IndividualPortalExtentX, Origin.Y + (Extents.Y / 1.5f), Origin.Z);
					}
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

void ANodeArea::AddObjectiveComponent()
{
	UStaticMeshComponent* ObjectiveComp = NewObject<UStaticMeshComponent>(this, UStaticMeshComponent::StaticClass());
		
	if (IsValid(ObjectiveComp))
	{
		ObjectiveComp->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
		ObjectiveComp->RegisterComponent();
		this->AddInstanceComponent(ObjectiveComp);

		if (ObjectiveMesh)
		{
			ObjectiveComp->SetStaticMesh(ObjectiveMesh);
		}
	}
}

void ANodeArea::AddObjectiveComponentWithMesh(UStaticMesh* Mesh)
{
	UStaticMeshComponent* ObjectiveComp = NewObject<UStaticMeshComponent>(this, UStaticMeshComponent::StaticClass());
		
	if (IsValid(ObjectiveComp))
	{
		ObjectiveComp->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
		ObjectiveComp->RegisterComponent();
		this->AddInstanceComponent(ObjectiveComp);

		if (Mesh)
		{
			ObjectiveComp->SetStaticMesh(Mesh);
		}
	}
}

// Called when the game starts or when spawned
void ANodeArea::BeginPlay()
{
	Super::BeginPlay();
}

