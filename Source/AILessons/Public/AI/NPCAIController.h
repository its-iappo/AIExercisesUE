// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Engine/TargetPoint.h"
#include "NPCAIController.generated.h"

/**
 * 
 */
UCLASS()
class AILESSONS_API ANPCAIController : public AAIController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	TArray<ATargetPoint*> TargetPoints;
	
	ATargetPoint* GetRandomTargetPoint();
};
