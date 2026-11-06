#pragma once


enum class ERBFNormalizeMethod:unsigned char
{
	OnlyNormalizeAboveOne = 0x0,
	AlwaysNormalize = 0x1,
	NormalizeWithinMedian = 0x2,
	NoNormalization = 0x3
};