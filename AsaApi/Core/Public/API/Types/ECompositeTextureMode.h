#pragma once


enum class ECompositeTextureMode:int
{
	CTM_Disabled = 0x0,
	CTM_NormalRoughnessToRed = 0x1,
	CTM_NormalRoughnessToGreen = 0x2,
	CTM_NormalRoughnessToBlue = 0x3,
	CTM_NormalRoughnessToAlpha = 0x4,
	CTM_MAX = 0x5
};