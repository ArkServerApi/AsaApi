#pragma once


enum class ETextureChromaticAdaptationMethod:unsigned char
{
	TCAM_None = 0x0,
	TCAM_Bradford = 0x1,
	TCAM_CAT02 = 0x2
};