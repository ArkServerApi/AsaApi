#pragma once


enum class EPCGDifferenceDensityFunction:unsigned char
{
	Minimum = 0x0,
	ClampedSubstraction = 0x1,
	Binary = 0x2
};