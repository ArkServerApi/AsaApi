#pragma once


enum class ERichCurveTangentWeightMode:int
{
	RCTWM_WeightedNone = 0x0,
	RCTWM_WeightedArrive = 0x1,
	RCTWM_WeightedLeave = 0x2,
	RCTWM_WeightedBoth = 0x3
};