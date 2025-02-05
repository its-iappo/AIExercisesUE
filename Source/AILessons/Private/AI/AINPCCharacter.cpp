// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AINPCCharacter.h"

// Sets default values
AAINPCCharacter::AAINPCCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAINPCCharacter::BeginPlay()
{
	Super::BeginPlay();
	auto ThisController = GetController();
	if (ThisController)
	{
		NPCControlle = Cast<ANPCAIController>(ThisController);
		if (NPCControlle)
		{
			if (StartOnRandomTarget)
			{
				CurrentTarget = NPCControlle->GetRandomTargetPoint();
			}
			else
			{
				CurrentTarget = NPCControlle->TargetPoints[0];
			}

			NPCControlle->MoveToActor(CurrentTarget);
		}
	}
}

// Called every frame
void AAINPCCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AAINPCCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AAINPCCharacter::SetCurrentTarget(ATargetPoint* Target)
{
	if (Target)
	{
		CurrentTarget = Target;
		NPCControlle->MoveToActor(CurrentTarget);
	}
}
	