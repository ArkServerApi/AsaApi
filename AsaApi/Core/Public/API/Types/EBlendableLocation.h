#pragma once


enum class EBlendableLocation:int
{
	BL_AfterTonemapping = 0x0,
	BL_BeforeTonemapping = 0x1,
	BL_BeforeTranslucency = 0x2,
	BL_ReplacingTonemapper = 0x3,
	BL_SSRInput = 0x4,
	BL_MAX = 0x5
};