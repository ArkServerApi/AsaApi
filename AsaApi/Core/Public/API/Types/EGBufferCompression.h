#pragma once


enum class EGBufferCompression:int
{
	GBC_Invalid = 0x0,
	GBC_Raw_Float_16_16_16_16 = 0x1,
	GBC_Raw_Float_16_16_16 = 0x2,
	GBC_Raw_Float_11_11_10 = 0x3,
	GBC_Raw_Float_10_10_10 = 0x4,
	GBC_Raw_Unorm_8_8_8_8 = 0x5,
	GBC_Raw_Unorm_8_8_8 = 0x6,
	GBC_Raw_Unorm_8_8 = 0x7,
	GBC_Raw_Unorm_8 = 0x8,
	GBC_Raw_Unorm_2 = 0x9,
	GBC_Raw_Float_16_16 = 0xA,
	GBC_Raw_Float_16 = 0xB,
	GBC_Bits_4 = 0xC,
	GBC_Bits_2 = 0xD,
	GBC_Packed_Normal_Octahedral_8_8 = 0xE,
	GBC_EncodeNormal_Normal_16_16_16 = 0xF,
	GBC_EncodeNormal_Normal_10_10_10 = 0x10,
	GBC_EncodeNormal_Normal_8_8_8 = 0x11,
	GBC_Packed_Color_5_6_5 = 0x12,
	GBC_Packed_Color_5_6_5_Sqrt = 0x13,
	GBC_Packed_Color_4_4_4 = 0x14,
	GBC_Packed_Color_4_4_4_Sqrt = 0x15,
	GBC_Packed_Color_3_3_2 = 0x16,
	GBC_Packed_Color_3_3_2_Sqrt = 0x17,
	GBC_Packed_Quantized_6 = 0x18,
	GBC_Packed_Quantized_4 = 0x19,
	GBC_Packed_Quantized_2 = 0x1A,
	GBC_Num = 0x1B
};