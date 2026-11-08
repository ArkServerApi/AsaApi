#pragma once


enum class EPrimitiveTopologyType:unsigned char
{
	Triangle = 0x0,
	Patch = 0x1,
	Line = 0x2,
	Point = 0x3,
	Num = 0x4,
	NumBits = 0x2
};