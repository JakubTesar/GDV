// Fill out your copyright notice in the Description page of Project Settings.


#include "KillZone.h"

// Sets default values
AKillZone::AKillZone()
{

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AKillZone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKillZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

