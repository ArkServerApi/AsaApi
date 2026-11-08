#pragma once


enum class UNormalizationMode:int
{
	UNORM_NONE = 0x1,
	UNORM_NFD = 0x2,
	UNORM_NFKD = 0x3,
	UNORM_NFC = 0x4,
	UNORM_DEFAULT = 0x4,
	UNORM_NFKC = 0x5,
	UNORM_FCD = 0x6,
	UNORM_MODE_COUNT = 0x7
};