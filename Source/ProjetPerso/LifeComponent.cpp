// Fill out your copyright notice in the Description page of Project Settings.
#include "LifeComponent.h"
#include "GameFramework/Actor.h"


// Sets default values for this component's properties
ULifeComponent::ULifeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULifeComponent::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ULifeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void ULifeComponent::LoseLife(int32 _hpToLose)
{
	hP -= _hpToLose;
	hP = FMath::Clamp(hP, 0, hPMAx);


	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT("hp::hp egale  on %d"), hP));

	if (hP <= 0)
	{
		GetOwner()->Destroy();
	}
}

float ULifeComponent::GetPercentHealth()
{
	return static_cast<float>(hP) / static_cast<float>(hPMAx);
}
