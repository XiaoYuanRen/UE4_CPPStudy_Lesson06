// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RunTime/UMG/Public/Blueprint/UserWidget.h"
#include "Lesson06GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class LESSON06_API ALesson06GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "UGM Game")
		void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG Game")
		TSubclassOf<UUserWidget> StartingWidgetClass;

	UPROPERTY()
		UUserWidget* CurrentWidget;
	
	
};
