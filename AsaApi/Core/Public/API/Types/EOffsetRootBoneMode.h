#pragma once


enum class EOffsetRootBoneMode:unsigned char
{
	Accumulate = 0x0,
	Interpolate = 0x1,
	Hold = 0x2,
	Release = 0x3
};