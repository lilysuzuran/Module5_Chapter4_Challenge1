// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "SlideableDoor.generated.h"

class UDoorSlideComponent;

UCLASS()
class MAZEGAME_API ASlideableDoor : public AStaticMeshActor
{
	GENERATED_BODY()

public:
	ASlideableDoor();

protected:
	UPROPERTY(EditAnywhere, NoClear)
	UDoorSlideComponent* DoorSlideComponent;
};
