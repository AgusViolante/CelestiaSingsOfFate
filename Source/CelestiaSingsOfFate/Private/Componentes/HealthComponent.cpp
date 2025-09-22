// Fill out your copyright notice in the Description page of Project Settings.


#include "Componentes/HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

bool UHealthComponent::Health(float amount)
{
	if (Life >= MaxLife)
		return false;

	Life = FMath::Clamp(Life + amount, 0.0f, MaxLife);
	return true;
}

void UHealthComponent::TakeDamage(float Damage)
{
	if (Life <= 0) { 
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1,5.0f,FColor::Black,FString("Ya moriste"));
		}
		return;
	}

	Life -= Damage;
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1,5.0f,FColor::Black,FString::SanitizeFloat(Life) + "Danios Recibidos" 
		);
	}
}

void UHealthComponent::TakeHeal(float heal)
{
	if (Life >= 100)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1,5.0f,FColor::Green,FString("Ya te curaste al maximo"));
		}
		return;
	}
	Life += heal;
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1,5.0f,FColor::Green,FString::SanitizeFloat(Life) + "Daños Curados"
		);
	}
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

