// Fill out your copyright notice in the Description page of Project Settings.


#include "SlideableDoor.h"
#include "DoorSlideComponent.h"

ASlideableDoor::ASlideableDoor()
{
	DoorSlideComponent = CreateDefaultSubobject<UDoorSlideComponent>(TEXT("DoorSlideComponent"));

}

