#pragma once


enum class ETextureLossyCompressionAmount:int
{
	TLCA_Default = 0x0,
	TLCA_None = 0x1,
	TLCA_Lowest = 0x2,
	TLCA_Low = 0x3,
	TLCA_Medium = 0x4,
	TLCA_High = 0x5,
	TLCA_Highest = 0x6
};