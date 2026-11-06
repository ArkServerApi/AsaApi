#pragma once


enum class ERefractionMode:int
{
	RM_IndexOfRefraction = 0x0,
	RM_PixelNormalOffset = 0x1,
	RM_2DOffset = 0x2,
	RM_None = 0x3
};