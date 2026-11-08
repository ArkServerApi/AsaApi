#pragma once


enum class EVirtualTextureUnpackType:int
{
	None = 0x0,
	BaseColorYCoCg = 0x1,
	NormalBC3 = 0x2,
	NormalBC5 = 0x3,
	NormalBC3BC3 = 0x4,
	NormalBC5BC1 = 0x5,
	HeightR16 = 0x6,
	NormalBGR565 = 0x7,
	BaseColorSRGB = 0x8,
	NormalPackedSwitch = 0x9
};