// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "p3_FPSGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class P3_FPS_API Ap3_FPSGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	virtual void StartPlay() override;
};
