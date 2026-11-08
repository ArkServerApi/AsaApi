#pragma once


enum class EParticleSortMode:int
{
	PSORTMODE_None = 0x0,
	PSORTMODE_ViewProjDepth = 0x1,
	PSORTMODE_DistanceToView = 0x2,
	PSORTMODE_Age_OldestFirst = 0x3,
	PSORTMODE_Age_NewestFirst = 0x4,
	PSORTMODE_MAX = 0x5
};