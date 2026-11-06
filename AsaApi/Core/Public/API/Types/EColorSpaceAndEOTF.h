#pragma once


enum class EColorSpaceAndEOTF:int
{
	EUnknown = 0x0,
	EColorSpace_Rec709 = 0x1,
	EColorSpace_Rec2020 = 0x2,
	EColorSpace_DCIP3 = 0x3,
	EEColorSpace_MASK = 0xF,
	EEOTF_Linear = 0x10,
	EEOTF_sRGB = 0x20,
	EEOTF_PQ = 0x30,
	EEOTF_MASK = 0xF0,
	ERec709_sRGB = 0x21,
	ERec709_Linear = 0x11,
	ERec2020_PQ = 0x32,
	ERec2020_Linear = 0x12,
	EDCIP3_PQ = 0x33,
	EDCIP3_Linear = 0x13
};