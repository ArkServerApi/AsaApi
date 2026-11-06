#pragma once


enum class ESoundwaveSampleRateSettings:unsigned char
{
	Max = 0x0,
	High = 0x1,
	Medium = 0x2,
	Low = 0x3,
	Min = 0x4,
	MatchDevice_DEPRECATED = 0x5
};