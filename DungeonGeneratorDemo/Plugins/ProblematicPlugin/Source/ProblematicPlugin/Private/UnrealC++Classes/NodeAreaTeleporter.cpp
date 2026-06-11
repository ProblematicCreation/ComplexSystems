// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealC++Classes/NodeAreaTeleporter.h"

#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "UnrealC++Classes/NodeArea.h"


// Sets default values for this component's properties
UNodeAreaTeleporter::UNodeAreaTeleporter()
	:ConnectingNodeArea(nullptr), PortalMesh(nullptr), PlayerCharRef(nullptr)
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UNodeAreaTeleporter::OnBoxOverlapBegin(UPrimitiveComponent* Comp, AActor* OtherActor,
                                            UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Player"))
	{
		FString newText3 = "Collided Player";
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, newText3);
		
		if (ConnectingNodeArea != nullptr)
		{
			bool CanContinue = false;
			//--==== if the player ref hasn't been set up ====--  
			if(PlayerCharRef != nullptr)
				CanContinue = true; 
			else
				PlayerCharRef = UGameplayStatics::GetPlayerCharacter(this, 0);
				CanContinue = true;

			if (CanContinue)
			{
				PlayerCharRef->SetActorLocation(FVector(ConnectingNodeArea->GetActorLocation().X, ConnectingNodeArea->GetActorLocation().Y, ConnectingNodeArea->GetActorLocation().Z + PlayerCharRef->GetCapsuleComponent()->GetScaledCapsuleHalfHeight() * 2.f));
				PlayerCharRef->GetCharacterMovement()->Velocity = FVector::ZeroVector;
			}
		}
	}
}

void UNodeAreaTeleporter::InitialSetup(ANodeArea* NodeAreaToTeleport, UStaticMeshComponent* StaticMesh)
{
	ConnectingNodeArea = NodeAreaToTeleport;
	PortalMesh = StaticMesh;
	
	if (IsValid(PortalMesh))
	{
		PortalMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		PortalMesh->SetCollisionResponseToAllChannels(ECR_Overlap);
		PortalMesh->SetGenerateOverlapEvents(true);
		
		PortalMesh->OnComponentBeginOverlap.AddDynamic(this, &UNodeAreaTeleporter::OnBoxOverlapBegin);
	}
}

void UNodeAreaTeleporter::FinalisedSetup(FVector CollisionLocation)
{
	if (IsValid(PortalMesh))
	{
		PortalMesh->SetWorldLocation(CollisionLocation);
	}
}

// Called when the game starts
void UNodeAreaTeleporter::BeginPlay()
{
	Super::BeginPlay();
}

