// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"





void ABasicPlayerController::BeginPlay()
{
	if (!IsLocalPlayerController())
	{
		return;
	}

	if (ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(Player))
	{
		if (UEnhancedInputLocalPlayerSubsystem* InputSystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (IMC_Basic)
			{
				InputSystem->AddMappingContext(IMC_Basic, 0);
			}
		}
	}
}

void ABasicPlayerController::OnPossess(APawn * aPawn)
{
	Super::OnPossess(aPawn);

	
}

	
