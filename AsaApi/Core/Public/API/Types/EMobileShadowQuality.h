#pragma once


enum class EMobileShadowQuality:unsigned char
{
	NoFiltering = 0x0,
	PCF_1x1 = 0x1,
	PCF_3x3 = 0x2,
	PCF_5x5 = 0x3
};