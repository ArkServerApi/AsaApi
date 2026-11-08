#pragma once


enum class ETimeStretchCurveMapping:unsigned char
{
	T_Original = 0x0,
	T_TargetMin = 0x1,
	T_TargetMax = 0x2,
	MAX = 0x3
};