#pragma once


enum class EStatTypingRule:unsigned char
{
	Int32 = 0x0,
	Bool = 0x1,
	FloatTruncated = 0x2,
	FloatEncoded = 0x3,
	DoubleEncoded = 0x4
};