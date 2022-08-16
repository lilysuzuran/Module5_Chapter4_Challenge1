// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorSlideComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Engine/TriggerBox.h"
#include "Engine/World.h"


// Sets default values for this component's properties
UDoorSlideComponent::UDoorSlideComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDoorSlideComponent::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetOwner()->GetActorLocation();
	FinalLocation = GetOwner()->GetActorLocation() + DesiredLocation;
	// ensure TimeToRotate is greater than EPSILON
	CurrentSlideTime = 0.0f;
}


// Called every frame
void UDoorSlideComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (CurrentSlideTime < TimetoSlide)
	{
		if (TriggerBox && GetWorld() && GetWorld()->GetFirstPlayerController())
		{
			APawn* PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
			if (PlayerPawn && TriggerBox->IsOverlappingActor(PlayerPawn))
			{
				CurrentSlideTime += DeltaTime;
				const float TimeRatio = FMath::Clamp(CurrentSlideTime / TimetoSlide, 0.0f, 1.0f);
				const float SlideAlpha = OpenCurve.GetRichCurveConst()->Eval(TimeRatio);
				const FVector CurrentLocation = FMath::Lerp(StartLocation, FinalLocation, SlideAlpha);
				GetOwner()->SetActorLocation(CurrentLocation);
			}
		}
	}

}

