#pragma once


enum class SkeletalMeshOptimizationImportance:int
{
	SMOI_Off = 0x0,
	SMOI_Lowest = 0x1,
	SMOI_Low = 0x2,
	SMOI_Normal = 0x3,
	SMOI_High = 0x4,
	SMOI_Highest = 0x5,
	SMOI_MAX = 0x6
};