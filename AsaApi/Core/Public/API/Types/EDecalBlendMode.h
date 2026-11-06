#pragma once


enum class EDecalBlendMode:int
{
	DBM_Translucent = 0x0,
	DBM_Stain = 0x1,
	DBM_Normal = 0x2,
	DBM_Emissive = 0x3,
	DBM_DBuffer_ColorNormalRoughness = 0x4,
	DBM_DBuffer_Color = 0x5,
	DBM_DBuffer_ColorNormal = 0x6,
	DBM_DBuffer_ColorRoughness = 0x7,
	DBM_DBuffer_Normal = 0x8,
	DBM_DBuffer_NormalRoughness = 0x9,
	DBM_DBuffer_Roughness = 0xA,
	DBM_DBuffer_Emissive = 0xB,
	DBM_DBuffer_AlphaComposite = 0xC,
	DBM_DBuffer_EmissiveAlphaComposite = 0xD,
	DBM_Volumetric_DistanceFunction = 0xE,
	DBM_AlphaComposite = 0xF,
	DBM_AmbientOcclusion = 0x10,
	DBM_MAX = 0x11
};