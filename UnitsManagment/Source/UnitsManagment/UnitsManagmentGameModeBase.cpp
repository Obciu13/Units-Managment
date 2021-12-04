// Copyright Epic Games, Inc. All Rights Reserved.


#include "UnitsManagmentGameModeBase.h"
#include "RTSPlayerController.h"
#include "RTSPlayerSpectatorPawn.h"


AUnitsManagmentGameModeBase::AUnitsManagmentGameModeBase()
{
	PlayerControllerClass = ARTSPlayerController::StaticClass();
	DefaultPawnClass = ARTSPlayerSpectatorPawn::StaticClass();

}