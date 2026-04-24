// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicAnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "BasicPlayer.h"


void UBasicAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	ABasicPlayer* Player = Cast<ABasicPlayer>(TryGetPawnOwner());
	if (Player)
	{
		Speed = Player->GetCharacterMovement()->Velocity.Size2D();
		TargetLeanAngle = Player->TargetLeanAngle;

		CurrentLeanAngle = FMath::FInterpTo(CurrentLeanAngle, TargetLeanAngle, DeltaSeconds, 5.0f);
	}
}