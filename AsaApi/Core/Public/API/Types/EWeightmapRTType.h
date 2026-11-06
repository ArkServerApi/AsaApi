#pragma once


enum class EWeightmapRTType:unsigned char
{
	WeightmapRT_Scratch_RGBA = 0x0,
	WeightmapRT_Scratch1 = 0x1,
	WeightmapRT_Scratch2 = 0x2,
	WeightmapRT_Scratch3 = 0x3,
	WeightmapRT_Mip0 = 0x4,
	WeightmapRT_Mip1 = 0x5,
	WeightmapRT_Mip2 = 0x6,
	WeightmapRT_Mip3 = 0x7,
	WeightmapRT_Mip4 = 0x8,
	WeightmapRT_Mip5 = 0x9,
	WeightmapRT_Mip6 = 0xA,
	WeightmapRT_Mip7 = 0xB,
	WeightmapRT_Count = 0xC
};