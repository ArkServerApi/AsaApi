#pragma once


enum class ELightMapVirtualTextureType:int
{
	LightmapLayer0 = 0x0,
	LightmapLayer1 = 0x1,
	ShadowMask = 0x2,
	SkyOcclusion = 0x3,
	AOMaterialMask = 0x4,
	Count = 0x5
};