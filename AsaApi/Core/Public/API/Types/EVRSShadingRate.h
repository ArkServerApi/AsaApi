#pragma once


enum class EVRSShadingRate:unsigned char
{
	VRSSR_1x1 = 0x0,
	VRSSR_1x2 = 0x1,
	VRSSR_2x1 = 0x4,
	VRSSR_2x2 = 0x5,
	VRSSR_2x4 = 0x6,
	VRSSR_4x2 = 0x9,
	VRSSR_4x4 = 0xA,
	VRSSR_Last = 0xA
};