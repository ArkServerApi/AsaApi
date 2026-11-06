#pragma once


enum class EMaterialFloatPrecisionMode:int
{
	MFPM_Default = 0x0,
	MFPM_Full_MaterialExpressionOnly = 0x1,
	MFPM_Full = 0x2,
	MFPM_Half = 0x3,
	MFPM_MAX = 0x4
};