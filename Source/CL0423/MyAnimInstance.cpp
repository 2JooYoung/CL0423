// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void UMyAnimInstance::NativeInitializeAnimation()
{
}

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	//ACharacter* Player = CastChecked<ACharacter>(TryGetPawnOwner());
	//check(Player);
	//ensure(Player);

	ACharacter* Player = Cast<ACharacter>(TryGetPawnOwner());
	if (Player)
	{
		Speed = Player->GetCharacterMovement()->Velocity.Size2D();
		//Direction = CalculateDirection(Player->GetCharacterMovement()->Velocity, Player->GetActorRotation());
		//Direction = UKismetAnimationLibrary::CalculateDirection(Player->GetCharacterMovement()->Velocity, Player->GetActorRotation());
	}

}

void UMyAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
}