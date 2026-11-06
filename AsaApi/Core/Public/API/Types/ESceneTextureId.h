#pragma once


enum class ESceneTextureId:int
{
	PPI_SceneColor = 0x0,
	PPI_SceneDepth = 0x1,
	PPI_DiffuseColor = 0x2,
	PPI_SpecularColor = 0x3,
	PPI_SubsurfaceColor = 0x4,
	PPI_BaseColor = 0x5,
	PPI_Specular = 0x6,
	PPI_Metallic = 0x7,
	PPI_WorldNormal = 0x8,
	PPI_SeparateTranslucency = 0x9,
	PPI_Opacity = 0xA,
	PPI_Roughness = 0xB,
	PPI_MaterialAO = 0xC,
	PPI_CustomDepth = 0xD,
	PPI_PostProcessInput0 = 0xE,
	PPI_PostProcessInput1 = 0xF,
	PPI_PostProcessInput2 = 0x10,
	PPI_PostProcessInput3 = 0x11,
	PPI_PostProcessInput4 = 0x12,
	PPI_PostProcessInput5 = 0x13,
	PPI_PostProcessInput6 = 0x14,
	PPI_DecalMask = 0x15,
	PPI_ShadingModelColor = 0x16,
	PPI_ShadingModelID = 0x17,
	PPI_AmbientOcclusion = 0x18,
	PPI_CustomStencil = 0x19,
	PPI_StoredBaseColor = 0x1A,
	PPI_StoredSpecular = 0x1B,
	PPI_Velocity = 0x1C,
	PPI_WorldTangent = 0x1D,
	PPI_Anisotropy = 0x1E
};