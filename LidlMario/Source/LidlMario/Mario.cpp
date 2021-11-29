// Fill out your copyright notice in the Description page of Project Settings.


#include "Mario.h"

#include "Dinut.h"
#include "KillZone.h"
#include "SNodePanel.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AMario::AMario()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("Arm");
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->TargetArmLength = 300;
	SpringArmComponent->bUsePawnControlRotation = true;
	
	CameraComponent = CreateDefaultSubobject<UCameraComponent>("Camera");
	CameraComponent->SetupAttachment(SpringArmComponent, USpringArmComponent::SocketName);
}
FVector StartLocation;

// Called when the game starts or when spawned
void AMario::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AMario::OnCollide);
	GetCapsuleComponent()->OnComponentEndOverlap.AddDynamic(this, &AMario::OnStopCollision);
}

// Called every frame
void AMario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Kdybych chtěl projet všechny Actory se kterými koliduji
	TArray<AActor*> Result;
	GetOverlappingActors(Result,AActor::StaticClass());
	for (auto Actor : Result)
	{
		UE_LOG(LogTemp, Warning, TEXT("Actor: %s"), *Actor->GetFullName())
	}

}

// Called to bind functionality to input
void AMario::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Foward", this, &AMario::MoveFoward);
	PlayerInputComponent->BindAxis("Sideways", this, &AMario::MoveSideways);
	PlayerInputComponent->BindAxis("MouseMovementX", this, &AMario::AddControllerYawInput);
	PlayerInputComponent->BindAxis("MouseMovementY", this, &AMario::AddControllerPitchInput);
	
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMario::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AMario::StopJumping);
}
void AMario::MoveFoward(float Direction)
{
	AddMovementInput(GetActorForwardVector(), Direction);
}
void AMario::MoveSideways(float Direction)
{
	AddMovementInput(GetActorRightVector(), Direction);
}
int32 CounterPoints = 0;

void AMario::OnCollide(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AKillZone* KillZone = Cast<AKillZone>(OtherActor);
	ADinut* Cube = Cast<ADinut>(OtherActor);
	if (Cube != nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Colliding with: %d"),CounterPoints, *OtherActor->GetFullName());
		Cube->K2_DestroyActor();
		CounterPoints++;
	}
	if (KillZone != nullptr)
	{
		SetActorLocation(StartLocation); 
	}
}
void AMario::OnStopCollision(UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	ADinut* Cube = Cast<ADinut>(OtherActor);
	if (Cube == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Colliding with:"), *OtherActor->GetFullName());
		FVector Location = GetActorLocation();
		Location.X += 100;
		SetActorLocation(Location);
		
	}}

