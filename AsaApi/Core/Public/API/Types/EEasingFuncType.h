#pragma once


enum class EEasingFuncType:unsigned char
{
	Linear = 0x0,
	Sinusoidal = 0x1,
	Cubic = 0x2,
	QuadraticInOut = 0x3,
	CubicInOut = 0x4,
	HermiteCubic = 0x5,
	QuarticInOut = 0x6,
	QuinticInOut = 0x7,
	CircularIn = 0x8,
	CircularOut = 0x9,
	CircularInOut = 0xA,
	ExpIn = 0xB,
	ExpOut = 0xC,
	ExpInOut = 0xD,
	CustomCurve = 0xE
};