#pragma once


struct FNPCSpawnLimit
{
	TSoftClassPtr<APrimalDinoCharacter> NPCClass;
	FString NPCClassString;
	float MaxPercentageOfDesiredNumToAllow;
	int CurrentNumberOfNPCTouching;
};