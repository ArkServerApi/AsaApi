#pragma once


enum class EShaderFundamentalType:unsigned char
{
	Bool = 0x0,
	Int = 0x1,
	Uint = 0x2,
	Float = 0x3,
	Struct = 0x4,
	None = 0xFF
};