#pragma once


enum class TextureMipGenSettings:int
{
	TMGS_FromTextureGroup = 0x0,
	TMGS_SimpleAverage = 0x1,
	TMGS_Sharpen0 = 0x2,
	TMGS_Sharpen1 = 0x3,
	TMGS_Sharpen2 = 0x4,
	TMGS_Sharpen3 = 0x5,
	TMGS_Sharpen4 = 0x6,
	TMGS_Sharpen5 = 0x7,
	TMGS_Sharpen6 = 0x8,
	TMGS_Sharpen7 = 0x9,
	TMGS_Sharpen8 = 0xA,
	TMGS_Sharpen9 = 0xB,
	TMGS_Sharpen10 = 0xC,
	TMGS_NoMipmaps = 0xD,
	TMGS_LeaveExistingMips = 0xE,
	TMGS_Blur1 = 0xF,
	TMGS_Blur2 = 0x10,
	TMGS_Blur3 = 0x11,
	TMGS_Blur4 = 0x12,
	TMGS_Blur5 = 0x13,
	TMGS_Unfiltered = 0x14,
	TMGS_Angular = 0x15,
	TMGS_MAX = 0x16
};