#pragma once


enum class ESamplePlayerSeekType:unsigned char
{
	FromBeginning = 0x0,
	FromCurrentPosition = 0x1,
	FromEnd = 0x2,
	Count = 0x3
};