#pragma once


enum class ESamplerFilter:int
{
	SF_Point = 0x0,
	SF_Bilinear = 0x1,
	SF_Trilinear = 0x2,
	SF_AnisotropicPoint = 0x3,
	SF_AnisotropicLinear = 0x4,
	ESamplerFilter_Num = 0x5,
	ESamplerFilter_NumBits = 0x3
};