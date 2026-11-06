#pragma once


enum class ERTDrawingType:unsigned char
{
	RTAtlas = 0x0,
	RTAtlasToNonAtlas = 0x1,
	RTNonAtlasToAtlas = 0x2,
	RTNonAtlas = 0x3,
	RTMips = 0x4
};