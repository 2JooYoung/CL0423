// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicAnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void UBasicAnimInstance::NativeInitializeAnimation()
{
}

void UBasicAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	//ACharacter* Player = CastChecked<ACharacter>(TryGetPawnOwner());
	//check(Player);
	//ensure(Player);

	ACharacter* Player = Cast<ACharacter>(TryGetPawnOwner());
	if (Player)
	{
		Speed = Player->GetCharacterMovement()->Velocity.Size2D();
	}
}

void UBasicAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
}