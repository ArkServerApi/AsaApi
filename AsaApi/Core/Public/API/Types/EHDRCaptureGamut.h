#pragma once


enum class EHDRCaptureGamut:int
{
	HCGM_Rec709 = 0x0,
	HCGM_P3DCI = 0x1,
	HCGM_Rec2020 = 0x2,
	HCGM_ACES = 0x3,
	HCGM_ACEScg = 0x4,
	HCGM_Linear = 0x5,
	HCGM_MAX = 0x6
};