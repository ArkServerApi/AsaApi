#pragma once


struct FNPCDifficultyLevelRange
{
	TArray<float, TSizedDefaultAllocator<32> > EnemyLevelsMin;
	TArray<float, TSizedDefaultAllocator<32> > EnemyLevelsMax;
	TArray<float, TSizedDefaultAllocator<32> > GameDifficulties;
};