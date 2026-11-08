#pragma once


enum class EHairStrandsBookmark:unsigned char
{
	ProcessTasks = 0x0,
	ProcessLODSelection = 0x1,
	ProcessGuideInterpolation = 0x2,
	ProcessGatherCluster = 0x3,
	ProcessStrandsInterpolation = 0x4,
	ProcessDebug = 0x5,
	ProcessEndOfFrame = 0x6
};