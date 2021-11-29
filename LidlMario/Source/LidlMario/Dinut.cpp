// Fill out your copyright notice in the Description page of Project Settings.


#include "Dinut.h"

// Sets default values
ADinut::ADinut()
{
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADinut::BeginPlay()
{
	Super::BeginPlay();
	
}
bool Ano = false;
// Called every frame
void ADinut::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector Location = GetActorLocation();
		if (Ano){
			Location.Z += 1;
			if (Location.Z > 160) {
				Ano = false;
			}
		}
		if (!Ano) { 
			Location.Z -= 1;
			if (Location.Z < 130) {
				Ano = true;
			}
		}
	SetActorLocation(Location);
}

