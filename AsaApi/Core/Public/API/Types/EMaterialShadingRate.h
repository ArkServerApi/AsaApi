#pragma once


enum class EMaterialShadingRate:int
{
	MSR_1x1 = 0x0,
	MSR_2x1 = 0x1,
	MSR_1x2 = 0x2,
	MSR_2x2 = 0x3,
	MSR_4x2 = 0x4,
	MSR_2x4 = 0x5,
	MSR_4x4 = 0x6,
	MSR_Count = 0x7
};