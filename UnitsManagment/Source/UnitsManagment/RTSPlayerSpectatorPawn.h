// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RTSPlayerSpectatorPawn.generated.h"

UCLASS()
class UNITSMANAGMENT_API ARTSPlayerSpectatorPawn : public APawn
{
	GENERATED_BODY()

public:

	// Sets default values for this pawn's properties
	ARTSPlayerSpectatorPawn();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
		class UCameraComponent* CameraComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void MoveUp(float Value);

	UFUNCTION(BlueprintCallable)
	void MoveRight(float Value);

};
