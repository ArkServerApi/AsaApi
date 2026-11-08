#pragma once


enum class EPCGComponentDirtyFlag:unsigned char
{
	None = 0x0,
	Actor = 0x1,
	Landscape = 0x2,
	Input = 0x4,
	Data = 0x8,
	All = 0xF
};