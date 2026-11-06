#pragma once


enum class EHeightmapRTType:unsigned char
{
	HeightmapRT_CombinedAtlas = 0x0,
	HeightmapRT_CombinedNonAtlas = 0x1,
	HeightmapRT_Scratch1 = 0x2,
	HeightmapRT_Scratch2 = 0x3,
	HeightmapRT_Scratch3 = 0x4,
	HeightmapRT_Mip1 = 0x5,
	HeightmapRT_Mip2 = 0x6,
	HeightmapRT_Mip3 = 0x7,
	HeightmapRT_Mip4 = 0x8,
	HeightmapRT_Mip5 = 0x9,
	HeightmapRT_Mip6 = 0xA,
	HeightmapRT_Mip7 = 0xB,
	HeightmapRT_Count = 0xC
};