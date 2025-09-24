// Fill out your copyright notice in the Description page of Project Settings.


#include "Componentes/ExpComponent.h"

// Sets default values for this component's properties
UExpComponent::UExpComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

float UExpComponent::ExpProxLVL(int32 Level)
{
	return (Lvl - 1) * 0.02 + 0.1 * pow((Lvl - 1 + 90.3), 2);
}

void UExpComponent::RecibeExp(float amount)
{
	ExpActual += amount;
	if (ExpActual >= ExpNecesaria)
	{
		Lvl++;
		ExpActual -= ExpNecesaria;
		ExpNecesaria = ExpProxLVL(Lvl);
	}
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1,5.0f,FColor::Yellow,FString::SanitizeFloat(ExpActual) + " Exp Recibidos " + FString::SanitizeFloat(ExpNecesaria) + " Exp Necesarios " + FString::FromInt(Lvl) + " Nivel");
	}
}


// Called when the game starts
void UExpComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UExpComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

