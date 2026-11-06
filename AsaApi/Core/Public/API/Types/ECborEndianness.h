#pragma once


enum class ECborEndianness:int
{
	Platform = 0x0,
	BigEndian = 0x1,
	LittleEndian = 0x2,
	StandardCompliant = 0x1
};