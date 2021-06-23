// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraDirector.generated.h"

UCLASS()
class P1_CONTROLLEDCAMERAS_API ACameraDirector : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	AActor* CameraOne;

	UPROPERTY(EditAnywhere)
	AActor* CameraTwo;

	UPROPERTY(EditAnywhere)
	AActor* CameraThree;

	/*UPROPERTY(EditAnywhere)
	TArray<AActor*> Cameras;

	UPROPERTY(EditAnywhere)
	int currentCamera;*/

	UPROPERTY(EditAnywhere)
	float TimeBetweenCameraChanges = 2.0f;

	UPROPERTY(EditAnywhere)
	float SmoothBlendTime = 0.75f;

	float TimeToNextCameraChange;

	APlayerController* GetOurPlayerController();
	
public:	
	// Sets default values for this actor's properties
	ACameraDirector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
