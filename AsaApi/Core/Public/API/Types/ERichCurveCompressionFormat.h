#pragma once


enum class ERichCurveCompressionFormat:int
{
	RCCF_Empty = 0x0,
	RCCF_Constant = 0x1,
	RCCF_Linear = 0x2,
	RCCF_Cubic = 0x3,
	RCCF_Mixed = 0x4,
	RCCF_Weighted = 0x5
};