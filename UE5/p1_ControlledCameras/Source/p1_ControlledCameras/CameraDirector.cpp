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

    for (int i = 0; i < Cameras.Num(); i++)
        if (!IsValid(Cameras[i]))
            UE_LOG(LogTemp, Error, TEXT("Camera %d is not valid."), i);

    if (TimeBetweenCameraChanges < SmoothBlendTime)
        UE_LOG(LogTemp, Warning, TEXT("The time between camera changes is less than the blend time."));
	
    if (currentCamera >= Cameras.Num())
    {
        UE_LOG(LogTemp, Warning, TEXT("The current camera number is %d, what is incorrect, because the total number of cameras is %d. Setting to 0."), currentCamera, Cameras.Num());
        currentCamera = 0;
    }

    GetOurPlayerController()->SetViewTarget(Cameras[currentCamera]);
}

// Called every frame
void ACameraDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    TimeToNextCameraChange -= DeltaTime;
    if (TimeToNextCameraChange <= 0.0f)
    {
        TimeToNextCameraChange += TimeBetweenCameraChanges;
        currentCamera = (currentCamera + 1) % Cameras.Num();

        GetOurPlayerController()->SetViewTargetWithBlend(Cameras[currentCamera], SmoothBlendTime);
    }
}

