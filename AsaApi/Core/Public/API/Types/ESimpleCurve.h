#pragma once


namespace ESimpleCurve
{
	enum Type:int
	{
		Linear = 0x0,
		Pow0_5 = 0x1,
		Pow1_0 = 0x2,
		Pow1_5 = 0x3,
		Pow2_0 = 0x4,
		Pow2_5 = 0x5,
		Pow3_0 = 0x6,
		Pow3_5 = 0x7,
		PowCos0_5 = 0x8,
		PowCos1_0 = 0x9,
		PowCos1_5 = 0xA,
		PowCos2_0 = 0xB,
		PowCos2_5 = 0xC,
		PowCos3_0 = 0xD,
		PowCos3_5 = 0xE,
		PowSin0_5 = 0xF,
		PowSin1_0 = 0x10,
		PowSin1_5 = 0x11,
		PowSin2_0 = 0x12,
		PowSin2_5 = 0x13,
		PowSin3_0 = 0x14,
		PowSin3_5 = 0x15,
		PowMinCos0_5 = 0x16,
		PowMinCos1_0 = 0x17,
		PowMinCos1_5 = 0x18,
		PowMinCos2_0 = 0x19,
		PowMinCos2_5 = 0x1A,
		PowMinCos3_0 = 0x1B,
		PowMinCos3_5 = 0x1C,
		PowMax0_5 = 0x1D,
		PowMax1_0 = 0x1E,
		PowMax1_5 = 0x1F,
		PowMax2_0 = 0x20,
		PowMax2_5 = 0x21,
		PowMax3_0 = 0x22,
		PowMax3_5 = 0x23
	};
}