#pragma once


enum class EDepthOfFieldFunctionValue:int
{
	TDOF_NearAndFarMask = 0x0,
	TDOF_NearMask = 0x1,
	TDOF_FarMask = 0x2,
	TDOF_CircleOfConfusionRadius = 0x3,
	TDOF_MAX = 0x4
};