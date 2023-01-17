// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LifeComponent.generated.h"


UCLASS( Blueprintable, editinlinenew, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PROJETPERSO_API ULifeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULifeComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 hP;
	UPROPERTY(EditAnywhere)
	int32 hPMAx;

	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void LoseLife(int32 _hpToLose);
	
	UFUNCTION(BlueprintCallable)
	float GetPercentHealth();
		
};
