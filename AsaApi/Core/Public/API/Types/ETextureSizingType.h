#pragma once


enum class ETextureSizingType:int
{
	TextureSizingType_UseSingleTextureSize = 0x0,
	TextureSizingType_UseAutomaticBiasedSizes = 0x1,
	TextureSizingType_UseManualOverrideTextureSize = 0x2,
	TextureSizingType_UseSimplygonAutomaticSizing = 0x3,
	TextureSizingType_AutomaticFromTexelDensity = 0x4,
	TextureSizingType_AutomaticFromMeshScreenSize = 0x5,
	TextureSizingType_AutomaticFromMeshDrawDistance = 0x6,
	TextureSizingType_MAX = 0x7
};