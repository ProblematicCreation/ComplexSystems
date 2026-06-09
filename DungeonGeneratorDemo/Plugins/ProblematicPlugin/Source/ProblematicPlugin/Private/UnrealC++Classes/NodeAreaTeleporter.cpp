// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealC++Classes/NodeAreaTeleporter.h"

#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "UnrealC++Classes/NodeArea.h"


// Sets default values for this component's properties
UNodeAreaTeleporter::UNodeAreaTeleporter()
	:ConnectingNodeArea(nullptr), CollisionBox(nullptr)
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
				PlayerCharRef->SetActorLocation(FVector(ConnectingNodeArea->GetActorLocation().X, ConnectingNodeArea->GetActorLocation().Y, ConnectingNodeArea->GetActorLocation().Z + 200.f));
		}
	}
}

void UNodeAreaTeleporter::InitialSetup(ANodeArea* NodeAreaToTeleport, UBoxComponent* Collision)
{
	ConnectingNodeArea = NodeAreaToTeleport;
	CollisionBox = Collision;
	
	if (IsValid(CollisionBox))
	{
		CollisionBox->SetBoxExtent(FVector(20.f,20.f,100.f));
		CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		CollisionBox->SetCollisionResponseToAllChannels(ECR_Overlap);
		CollisionBox->SetGenerateOverlapEvents(true);
		
		CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &UNodeAreaTeleporter::OnBoxOverlapBegin);
	}
}

void UNodeAreaTeleporter::FinalisedSetup(FVector CollisionLocation)
{
	CollisionBox->SetWorldLocation(CollisionLocation);
	/*if (IsValid(CollisionBox))
	{
		DrawDebugBox(this->GetWorld(), CollisionBox->GetComponentLocation(), CollisionBox->GetScaledBoxExtent(), FColor::Red, true);
	}*/
}

// Called when the game starts
void UNodeAreaTeleporter::BeginPlay()
{
	Super::BeginPlay();
}

