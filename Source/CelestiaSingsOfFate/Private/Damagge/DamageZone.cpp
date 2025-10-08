// Fill out your copyright notice in the Description page of Project Settings.


#include "Damagge/DamageZone.h"
#include "Components/BoxComponent.h"
#include "Components/HealthComponent.h"
#include "interfaces/I_PickUp.h"

// Sets default values
ADamageZone::ADamageZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CubeCollision"));
	RootComponent = BoxCollision;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	CubeMesh->SetupAttachment(RootComponent);
}



// Called when the game starts or when spawned
void ADamageZone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADamageZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADamageZone::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (UHealthComponent* Salud = OtherActor->FindComponentByClass<UHealthComponent>())
	{
		Salud->TakeDamage(DamageCharacter);
	}
}



