#pragma once


enum class ETextureSourceEncoding:unsigned char
{
	TSE_None = 0x0,
	TSE_Linear = 0x1,
	TSE_sRGB = 0x2,
	TSE_ST2084 = 0x3,
	TSE_Gamma22 = 0x4,
	TSE_BT1886 = 0x5,
	TSE_Gamma26 = 0x6,
	TSE_Cineon = 0x7,
	TSE_REDLog = 0x8,
	TSE_REDLog3G10 = 0x9,
	TSE_SLog1 = 0xA,
	TSE_SLog2 = 0xB,
	TSE_SLog3 = 0xC,
	TSE_AlexaV3LogC = 0xD,
	TSE_CanonLog = 0xE,
	TSE_ProTune = 0xF,
	TSE_VLog = 0x10,
	TSE_MAX = 0x11
};