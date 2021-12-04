// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RTSPlayerController.generated.h"

class AUnitBase;
class ARTSPlayerSpectatorPawn;

UCLASS()
class UNITSMANAGMENT_API ARTSPlayerController : public APlayerController
{
	GENERATED_BODY()

		ARTSPlayerController();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
	ARTSPlayerSpectatorPawn* CameraPawn;

	// Disable queries for AttackRangeCollider for all Units in level.
	UFUNCTION(BlueprintCallable)
	void DisableAttackRangeColilders();

	// Enable queries for AttackRangeCollider for all Units in level.
	UFUNCTION(BlueprintCallable)
	void EnableAttackRangeColilders();


};
	
