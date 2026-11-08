#pragma once


enum class ETextureDownscaleOptions:unsigned char
{
	Default = 0x0,
	Unfiltered = 0x1,
	SimpleAverage = 0x2,
	Sharpen0 = 0x3,
	Sharpen1 = 0x4,
	Sharpen2 = 0x5,
	Sharpen3 = 0x6,
	Sharpen4 = 0x7,
	Sharpen5 = 0x8,
	Sharpen6 = 0x9,
	Sharpen7 = 0xA,
	Sharpen8 = 0xB,
	Sharpen9 = 0xC,
	Sharpen10 = 0xD
};