#pragma once


enum class ECameraAnimationEasingType:unsigned char
{
	Linear = 0x0,
	Sinusoidal = 0x1,
	Quadratic = 0x2,
	Cubic = 0x3,
	Quartic = 0x4,
	Quintic = 0x5,
	Exponential = 0x6,
	Circular = 0x7
};