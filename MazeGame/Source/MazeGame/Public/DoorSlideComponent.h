// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Curves/CurveFloat.h"
#include "DoorSlideComponent.generated.h"

class ATriggerBox;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MAZEGAME_API UDoorSlideComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDoorSlideComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	FVector DesiredLocation = FVector::ZeroVector;

	FVector StartLocation = FVector::ZeroVector;
	FVector FinalLocation = FVector::ZeroVector;

	UPROPERTY(EditAnywhere)
		float TimetoSlide = 1.0f;

	float CurrentSlideTime = 0.0f;

	UPROPERTY(EditAnywhere)
		ATriggerBox* TriggerBox;

	UPROPERTY(EditAnywhere)
		FRuntimeFloatCurve OpenCurve;
};