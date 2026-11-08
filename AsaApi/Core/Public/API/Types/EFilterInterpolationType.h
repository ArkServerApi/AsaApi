#pragma once


enum class EFilterInterpolationType:int
{
	BSIT_Average = 0x0,
	BSIT_Linear = 0x1,
	BSIT_Cubic = 0x2,
	BSIT_EaseInOut = 0x3,
	BSIT_ExponentialDecay = 0x4,
	BSIT_SpringDamper = 0x5,
	BSIT_MAX = 0x6
};