#pragma once


enum class ETextureSourceFormat:int
{
	TSF_Invalid = 0x0,
	TSF_G8 = 0x1,
	TSF_BGRA8 = 0x2,
	TSF_BGRE8 = 0x3,
	TSF_RGBA16 = 0x4,
	TSF_RGBA16F = 0x5,
	TSF_RGBA8_DEPRECATED = 0x6,
	TSF_RGBE8_DEPRECATED = 0x7,
	TSF_G16 = 0x8,
	TSF_RGBA32F = 0x9,
	TSF_R16F = 0xA,
	TSF_R32F = 0xB,
	TSF_MAX = 0xC,
	TSF_RGBA8 = 0x6,
	TSF_RGBE8 = 0x7
};