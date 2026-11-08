#pragma once


enum class ETextureColorSpace:unsigned char
{
	TCS_None = 0x0,
	TCS_sRGB = 0x1,
	TCS_Rec2020 = 0x2,
	TCS_ACESAP0 = 0x3,
	TCS_ACESAP1 = 0x4,
	TCS_P3DCI = 0x5,
	TCS_P3D65 = 0x6,
	TCS_REDWideGamut = 0x7,
	TCS_SonySGamut3 = 0x8,
	TCS_SonySGamut3Cine = 0x9,
	TCS_AlexaWideGamut = 0xA,
	TCS_CanonCinemaGamut = 0xB,
	TCS_GoProProtuneNative = 0xC,
	TCS_PanasonicVGamut = 0xD,
	TCS_Custom = 0x63,
	TCS_MAX = 0x64
};