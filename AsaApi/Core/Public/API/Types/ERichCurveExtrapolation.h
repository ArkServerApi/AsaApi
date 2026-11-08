#pragma once


enum class ERichCurveExtrapolation:int
{
	RCCE_Cycle = 0x0,
	RCCE_CycleWithOffset = 0x1,
	RCCE_Oscillate = 0x2,
	RCCE_Linear = 0x3,
	RCCE_Constant = 0x4,
	RCCE_None = 0x5
};