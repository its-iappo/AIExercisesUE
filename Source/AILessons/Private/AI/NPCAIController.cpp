// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/NPCAIController.h"

ATargetPoint* ANPCAIController::GetRandomTargetPoint()
{
	return TargetPoints[FMath::RandRange(0, TargetPoints.Num())];	
}

