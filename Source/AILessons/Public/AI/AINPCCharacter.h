// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NPCAIController.h"
#include "Engine/TargetPoint.h"
#include "GameFramework/Character.h"
#include "AINPCCharacter.generated.h"

UCLASS()
class AILESSONS_API AAINPCCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAINPCCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StartOnRandomTarget;

protected:
	UPROPERTY()
	TObjectPtr<ATargetPoint> CurrentTarget;
	UPROPERTY()
	TObjectPtr<ANPCAIController> NPCControlle;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void SetCurrentTarget(ATargetPoint* Target);
};
