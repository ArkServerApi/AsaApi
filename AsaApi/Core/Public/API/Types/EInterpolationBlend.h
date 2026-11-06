#pragma once


namespace EInterpolationBlend
{
	enum Type:int
	{
		Linear = 0x0,
		Cubic = 0x1,
		Sinusoidal = 0x2,
		EaseInOutExponent2 = 0x3,
		EaseInOutExponent3 = 0x4,
		EaseInOutExponent4 = 0x5,
		EaseInOutExponent5 = 0x6,
		MAX = 0x7
	};
}