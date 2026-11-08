#pragma once


enum class EGBufferSlot:int
{
	GBS_Invalid = 0x0,
	GBS_SceneColor = 0x1,
	GBS_WorldNormal = 0x2,
	GBS_PerObjectGBufferData = 0x3,
	GBS_Metallic = 0x4,
	GBS_Specular = 0x5,
	GBS_Roughness = 0x6,
	GBS_ShadingModelId = 0x7,
	GBS_SelectiveOutputMask = 0x8,
	GBS_BaseColor = 0x9,
	GBS_GenericAO = 0xA,
	GBS_IndirectIrradiance = 0xB,
	GBS_AO = 0xC,
	GBS_Velocity = 0xD,
	GBS_PrecomputedShadowFactor = 0xE,
	GBS_WorldTangent = 0xF,
	GBS_Anisotropy = 0x10,
	GBS_CustomData = 0x11,
	GBS_SubsurfaceColor = 0x12,
	GBS_Opacity = 0x13,
	GBS_SubsurfaceProfile = 0x14,
	GBS_ClearCoat = 0x15,
	GBS_ClearCoatRoughness = 0x16,
	GBS_HairSecondaryWorldNormal = 0x17,
	GBS_HairBacklit = 0x18,
	GBS_Cloth = 0x19,
	GBS_SubsurfaceProfileX = 0x1A,
	GBS_IrisNormal = 0x1B,
	GBS_SeparatedMainDirLight = 0x1C,
	GBS_Num = 0x1D
};