// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelUp.h"

LevelUp::LevelUp() : XPThreshold(100), CurrentXP(0), CurrentPlayerLevel(0)
{
}

LevelUp::~LevelUp()
{
}

void LevelUp::AddXP(int XPToAdd)
{
	CurrentXP += XPToAdd;
}

bool LevelUp::CheckLevelUp()
{
	return CurrentXP >= XPThreshold;
}

void LevelUp::LevelUpPlayer()
{
	if(CheckLevelUp())
	{
		CurrentXP -= XPThreshold;
		XPThreshold += 50; //increases xp threshold for next level
		CurrentPlayerLevel++;

		//need to restore player hp
		//trigger upgrade UI and game freeze
	}
}

int LevelUp::GetCurrentXP()
{
	return CurrentXP;
}

int LevelUp::GetPlayerLevel()
{
	return CurrentPlayerLevel;
}

int LevelUp::GetNextLevelXP()
{
	return XPThreshold;
}

