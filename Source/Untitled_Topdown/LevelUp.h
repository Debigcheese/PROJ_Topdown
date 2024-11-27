// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class UNTITLED_TOPDOWN_API LevelUp
{
public:
	LevelUp();
	~LevelUp();

	void AddXP(int XPToAdd); //xp that will be added after enemies has dropped
	bool CheckLevelUp(); //check if player can level up
	void LevelUpPlayer(); //handle level up of the player

	int GetCurrentXP();
	int GetNextLevelXP();
	int GetPlayerLevel();
	
private:
	int XPThreshold;
	int CurrentXP;
	int CurrentPlayerLevel;
	
};
