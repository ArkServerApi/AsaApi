#pragma once


enum class EMaterialShadingModel:int
{
	MSM_Unlit = 0x0,
	MSM_DefaultLit = 0x1,
	MSM_Subsurface = 0x2,
	MSM_PreintegratedSkin = 0x3,
	MSM_ClearCoat = 0x4,
	MSM_SubsurfaceProfile = 0x5,
	MSM_TwoSidedFoliage = 0x6,
	MSM_Hair = 0x7,
	MSM_Cloth = 0x8,
	MSM_Eye = 0x9,
	MSM_SingleLayerWater = 0xA,
	MSM_ThinTranslucent = 0xB,
	MSM_Strata = 0xC,
	MSM_NUM = 0xD,
	MSM_FromMaterialExpression = 0xE,
	MSM_MAX = 0xF
};