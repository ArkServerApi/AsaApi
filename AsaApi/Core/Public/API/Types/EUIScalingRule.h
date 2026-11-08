#pragma once


enum class EUIScalingRule:unsigned char
{
	ShortestSide = 0x0,
	LongestSide = 0x1,
	Horizontal = 0x2,
	Vertical = 0x3,
	ScaleToFit = 0x4,
	Custom = 0x5
};