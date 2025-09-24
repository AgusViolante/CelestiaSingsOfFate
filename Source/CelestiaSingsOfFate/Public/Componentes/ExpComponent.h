// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ExpComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CELESTIASINGSOFFATE_API UExpComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UExpComponent();
	//Variables
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Exp")
	int32 Lvl = 1;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Exp")
	float ExpActual = 0.0f;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Exp")
	float ExpNecesaria ;

	//Funciones
	UFUNCTION(BlueprintCallable)
	float ExpProxLVL(int32 Level);
	
	UFUNCTION(BlueprintCallable)
	void RecibeExp(float amount);
	
	UFUNCTION(BlueprintCallable)
	int32 GetLVL() {return Lvl;};

	UFUNCTION(BlueprintCallable)
	inline float GetExpActual() {return ExpActual;};

	UFUNCTION(BlueprintCallable)
	inline float GetExpNecesaria() {return ExpNecesaria;};


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
