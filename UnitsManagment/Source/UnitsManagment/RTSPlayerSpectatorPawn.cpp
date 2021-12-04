// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSPlayerSpectatorPawn.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ARTSPlayerSpectatorPawn::ARTSPlayerSpectatorPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
}

// Called when the game starts or when spawned
void ARTSPlayerSpectatorPawn::BeginPlay()
{
	Super::BeginPlay();
	CameraComp->SetWorldRotation(FRotator(-90.0, 0.0, 0.0));
}

// Called every frame
void ARTSPlayerSpectatorPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ARTSPlayerSpectatorPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ARTSPlayerSpectatorPawn::MoveUp(float Value)
{
	if (Value != 0.0)
	{
		AddMovementInput(GetActorUpVector(), Value);
	}
}

void ARTSPlayerSpectatorPawn::MoveRight(float Value)
{
	if (Value != 0.0)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

