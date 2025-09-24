// Fill out your copyright notice in the Description page of Project Settings.

#include "Items/ExpAmount.h"
#include "Components/BoxComponent.h"
#include "Componentes/ExpComponent.h"


// Sets default values
AExpAmount::AExpAmount()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CubeCollision"));
	RootComponent = BoxCollision;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	CubeMesh->SetupAttachment(RootComponent);
}

void AExpAmount::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	if (UExpComponent* RecibeExp = OtherActor->FindComponentByClass<UExpComponent>())
	{
		RecibeExp->RecibeExp(ExpAdquirida);
	}
}

// Called when the game starts or when spawned
void AExpAmount::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AExpAmount::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

