#pragma once


enum class EGBufferType:int
{
	GBT_Invalid = 0x0,
	GBT_Unorm_16_16 = 0x1,
	GBT_Unorm_8_8_8_8 = 0x2,
	GBT_Unorm_11_11_10 = 0x3,
	GBT_Unorm_10_10_10_2 = 0x4,
	GBT_Unorm_16_16_16_16 = 0x5,
	GBT_Float_16_16 = 0x6,
	GBT_Float_16_16_16_16 = 0x7,
	GBT_Num = 0x8
};