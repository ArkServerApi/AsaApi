#pragma once


enum class EConstraintPlasticityType:int
{
	CCPT_Free = 0x0,
	CCPT_Shrink = 0x1,
	CCPT_Grow = 0x2,
	CCPT_MAX = 0x3
};