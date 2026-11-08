#pragma once


enum class EVectorQuantization:unsigned char
{
	RoundWholeNumber = 0x0,
	RoundOneDecimal = 0x1,
	RoundTwoDecimals = 0x2
};