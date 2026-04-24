// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BasicPlayerController.generated.h"

class UInputMappingContext;


UCLASS()
class CL0423_API ABasicPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> IMC_Basic;

protected:
	virtual void BeginPlay() override;

	virtual void OnPossess(APawn* aPawn) override;

	//virtual void OnUnPossess() override;
	
};
