#pragma once


enum class EDistributionVectorLockFlags:int
{
	EDVLF_None = 0x0,
	EDVLF_XY = 0x1,
	EDVLF_XZ = 0x2,
	EDVLF_YZ = 0x3,
	EDVLF_XYZ = 0x4,
	EDVLF_MAX = 0x5
};