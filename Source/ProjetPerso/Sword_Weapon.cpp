// Fill out your copyright notice in the Description page of Project Settings.


#include "Sword_Weapon.h"

// Sets default values
ASword_Weapon::ASword_Weapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	//mesh->GetStaticMesh()->Set;
}

// Called when the game starts or when spawned
void ASword_Weapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASword_Weapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

