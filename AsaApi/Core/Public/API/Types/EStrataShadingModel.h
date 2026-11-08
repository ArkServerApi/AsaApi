#pragma once


enum class EStrataShadingModel:int
{
	SSM_Unlit = 0x0,
	SSM_DefaultLit = 0x1,
	SSM_SubsurfaceLit = 0x2,
	SSM_VolumetricFogCloud = 0x3,
	SSM_Hair = 0x4,
	SSM_Eye = 0x5,
	SSM_SingleLayerWater = 0x6,
	SSM_LightFunction = 0x7,
	SSM_PostProcess = 0x8,
	SSM_Decal = 0x9,
	SSM_UI = 0xA,
	SSM_NUM = 0xB
};