// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BasicAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class CL0423_API UBasicAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public: 

	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	float TargetLeanAngle = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	float CurrentLeanAngle = 0;

};
