#pragma once


enum class EDebugViewShaderMode:int
{
	DVSM_None = 0x0,
	DVSM_ShaderComplexity = 0x1,
	DVSM_ShaderComplexityContainedQuadOverhead = 0x2,
	DVSM_ShaderComplexityBleedingQuadOverhead = 0x3,
	DVSM_QuadComplexity = 0x4,
	DVSM_PrimitiveDistanceAccuracy = 0x5,
	DVSM_MeshUVDensityAccuracy = 0x6,
	DVSM_MaterialTextureScaleAccuracy = 0x7,
	DVSM_OutputMaterialTextureScales = 0x8,
	DVSM_RequiredTextureResolution = 0x9,
	DVSM_VirtualTexturePendingMips = 0xA,
	DVSM_LODColoration = 0xB,
	DVSM_VisualizeGPUSkinCache = 0xC,
	DVSM_MAX = 0xD
};