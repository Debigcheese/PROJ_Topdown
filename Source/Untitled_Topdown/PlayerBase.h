// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LevelUp.h"
#include "GameFramework/Character.h"
#include "PlayerBase.generated.h"

UCLASS()
class UNTITLED_TOPDOWN_API APlayerBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerBase();

	UFUNCTION(BlueprintCallable, Category= "XP")
	void CollectXP(int XPAmount);

	UFUNCTION(BlueprintImplementableEvent, Category = "LevelUp")
	void OnLevelUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:


	
};
