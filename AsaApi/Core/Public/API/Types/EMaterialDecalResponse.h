#pragma once


enum class EMaterialDecalResponse:int
{
	MDR_None = 0x0,
	MDR_ColorNormalRoughness = 0x1,
	MDR_Color = 0x2,
	MDR_ColorNormal = 0x3,
	MDR_ColorRoughness = 0x4,
	MDR_Normal = 0x5,
	MDR_NormalRoughness = 0x6,
	MDR_Roughness = 0x7,
	MDR_MAX = 0x8
};