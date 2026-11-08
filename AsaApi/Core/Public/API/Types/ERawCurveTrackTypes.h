#pragma once


enum class ERawCurveTrackTypes:unsigned char
{
	RCT_Float = 0x0,
	RCT_Vector = 0x1,
	RCT_Transform = 0x2,
	RCT_MAX = 0x3
};