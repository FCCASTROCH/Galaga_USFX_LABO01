// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapsulaArmas.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ACapsulaArmas : public ACapsula
{
	GENERATED_BODY()
public:
	ACapsulaArmas();
	float ZLimiteDestruccion;
	virtual void Tick(float DeltaTime) override;

	virtual void PickUp()override;
	virtual void PutDown(FTransform TargetLocation)override;
	virtual void Mover(float DeltaTime)override;

};
