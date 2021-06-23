// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraDirector.h"
#include "Kismet/GameplayStatics.h"

APlayerController* ACameraDirector::GetOurPlayerController()
{
    return UGameplayStatics::GetPlayerController(this, 0);
}

// Sets default values
ACameraDirector::ACameraDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;    
}

// Called when the game starts or when spawned
void ACameraDirector::BeginPlay()
{
	Super::BeginPlay();

    TimeToNextCameraChange = TimeBetweenCameraChanges;

    /*for (int i = 0; i < Cameras.Num(); i++)
        if (!IsValid(Cameras[i]))
            UE_LOG(LogTemp, Error, TEXT("Camera %d is not valid."), i);*/

    if (TimeBetweenCameraChanges < SmoothBlendTime)
        UE_LOG(LogTemp, Warning, TEXT("The time between camera changes is less than the blend time."));
	
    GetOurPlayerController()->SetViewTarget(CameraOne);
}

// Called every frame
void ACameraDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    TimeToNextCameraChange -= DeltaTime;
    if (TimeToNextCameraChange <= 0.0f)
    {
        TimeToNextCameraChange += TimeBetweenCameraChanges;

        if (GetOurPlayerController())
        {
            if (GetOurPlayerController()->GetViewTarget() == CameraThree)
            {
                // Blend smoothly to camera one.
                GetOurPlayerController()->SetViewTargetWithBlend(CameraOne, SmoothBlendTime);
            }
            else if (GetOurPlayerController()->GetViewTarget() == CameraOne)
            {
                // Blend smoothly to camera two.
                GetOurPlayerController()->SetViewTargetWithBlend(CameraTwo, SmoothBlendTime);
            }
            else if (GetOurPlayerController()->GetViewTarget() == CameraTwo)
            {
                // Blend smoothly to camera three.
                GetOurPlayerController()->SetViewTargetWithBlend(CameraThree, SmoothBlendTime);
            }
        }
    }
}

