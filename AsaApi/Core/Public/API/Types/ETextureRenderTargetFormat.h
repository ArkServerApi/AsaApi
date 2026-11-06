#pragma once


enum class ETextureRenderTargetFormat:int
{
	RTF_R8 = 0x0,
	RTF_RG8 = 0x1,
	RTF_RGBA8 = 0x2,
	RTF_RGBA8_SRGB = 0x3,
	RTF_R16f = 0x4,
	RTF_RG16f = 0x5,
	RTF_RGBA16f = 0x6,
	RTF_R32f = 0x7,
	RTF_RG32f = 0x8,
	RTF_RGBA32f = 0x9,
	RTF_RGB10A2 = 0xA
};