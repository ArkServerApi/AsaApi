#pragma once


enum class OodleLZ_CompressionLevel:int
{
	OodleLZ_CompressionLevel_None = 0x0,
	OodleLZ_CompressionLevel_SuperFast = 0x1,
	OodleLZ_CompressionLevel_VeryFast = 0x2,
	OodleLZ_CompressionLevel_Fast = 0x3,
	OodleLZ_CompressionLevel_Normal = 0x4,
	OodleLZ_CompressionLevel_Optimal1 = 0x5,
	OodleLZ_CompressionLevel_Optimal2 = 0x6,
	OodleLZ_CompressionLevel_Optimal3 = 0x7,
	OodleLZ_CompressionLevel_Optimal4 = 0x8,
	OodleLZ_CompressionLevel_Optimal5 = 0x9,
	OodleLZ_CompressionLevel_HyperFast1 = 0xFF,
	OodleLZ_CompressionLevel_HyperFast2 = 0xFE,
	OodleLZ_CompressionLevel_HyperFast3 = 0xFD,
	OodleLZ_CompressionLevel_HyperFast4 = 0xFC,
	OodleLZ_CompressionLevel_HyperFast = 0xFF,
	OodleLZ_CompressionLevel_Optimal = 0x6,
	OodleLZ_CompressionLevel_Max = 0x9,
	OodleLZ_CompressionLevel_Min = 0xFC,
	OodleLZ_CompressionLevel_Force32 = 0x40000000,
	OodleLZ_CompressionLevel_Invalid = 0x40000000
};