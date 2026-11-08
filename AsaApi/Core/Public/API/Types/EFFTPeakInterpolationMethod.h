#pragma once


enum class EFFTPeakInterpolationMethod:unsigned char
{
	NearestNeighbor = 0x0,
	Linear = 0x1,
	Quadratic = 0x2,
	ConstantQ = 0x3
};