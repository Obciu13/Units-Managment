// Fill out your copyright notice in the Description page of Project Settings.

#include <UnitsManagment/RTSPlayerSpectatorPawn.h>
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "UnitBase.h"
#include "GameFramework/PlayerController.h"
#include "RTSPlayerController.h"

ARTSPlayerController::ARTSPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
}

// Disable queries for AttackRangeCollider for all Units in level.
void ARTSPlayerController::DisableAttackRangeColilders()
{
	TArray<AActor*> FoundUnitBase;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AUnitBase::StaticClass(), FoundUnitBase);
	for (AActor* Actor : FoundUnitBase)
	{
		Cast<AUnitBase>(Actor)->DisableAttackCollider();
	}
}

// Enable queries for AttackRangeCollider for all Units in level.
void ARTSPlayerController::EnableAttackRangeColilders()
{
	TArray<AActor*> FoundUnitBase;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AUnitBase::StaticClass(), FoundUnitBase);
	for (AActor* Actor : FoundUnitBase)
	{
		Cast<AUnitBase>(Actor)->EnableAttackCollider();
	}
}