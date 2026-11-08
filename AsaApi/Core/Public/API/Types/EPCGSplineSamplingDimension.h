#pragma once


enum class EPCGSplineSamplingDimension:unsigned char
{
	OnSpline = 0x0,
	OnHorizontal = 0x1,
	OnVertical = 0x2,
	OnVolume = 0x3,
	OnInterior = 0x4
};