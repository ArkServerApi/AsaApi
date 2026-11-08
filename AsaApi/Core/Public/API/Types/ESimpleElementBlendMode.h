#pragma once


enum class ESimpleElementBlendMode:int
{
	SE_BLEND_Opaque = 0x0,
	SE_BLEND_Masked = 0x1,
	SE_BLEND_Translucent = 0x2,
	SE_BLEND_Additive = 0x3,
	SE_BLEND_Modulate = 0x4,
	SE_BLEND_MaskedDistanceField = 0x5,
	SE_BLEND_MaskedDistanceFieldShadowed = 0x6,
	SE_BLEND_TranslucentDistanceField = 0x7,
	SE_BLEND_TranslucentDistanceFieldShadowed = 0x8,
	SE_BLEND_AlphaComposite = 0x9,
	SE_BLEND_AlphaHoldout = 0xA,
	SE_BLEND_AlphaBlend = 0xB,
	SE_BLEND_TranslucentAlphaOnly = 0xC,
	SE_BLEND_TranslucentAlphaOnlyWriteAlpha = 0xD,
	SE_BLEND_RGBA_MASK_START = 0xE,
	SE_BLEND_RGBA_MASK_END = 0x2D,
	SE_BLEND_MAX = 0x2E
};