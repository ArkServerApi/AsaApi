#pragma once


enum class EVRSRateCombiner:unsigned char
{
	VRSRB_Passthrough = 0x0,
	VRSRB_Override = 0x1,
	VRSRB_Min = 0x2,
	VRSRB_Max = 0x3,
	VRSRB_Sum = 0x4
};