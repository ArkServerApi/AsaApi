#pragma once


enum class EColorWriteMask:int
{
	CW_RED = 0x1,
	CW_GREEN = 0x2,
	CW_BLUE = 0x4,
	CW_ALPHA = 0x8,
	CW_NONE = 0x0,
	CW_RGB = 0x7,
	CW_RGBA = 0xF,
	CW_RG = 0x3,
	CW_BA = 0xC,
	EColorWriteMask_NumBits = 0x4
};