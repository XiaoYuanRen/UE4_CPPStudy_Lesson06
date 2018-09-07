// Fill out your copyright notice in the Description page of Project Settings.

#include "OurPlayerController.h"




void AOurPlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetInputMode(FInputModeGameAndUI());
}
