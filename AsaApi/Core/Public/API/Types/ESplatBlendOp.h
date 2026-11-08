#pragma once


enum class ESplatBlendOp:unsigned char
{
	SBO_None = 0x0,
	SBO_Min = 0x1,
	SBO_Max = 0x2,
	SBO_Add = 0x3,
	SBO_Avg = 0x4
};