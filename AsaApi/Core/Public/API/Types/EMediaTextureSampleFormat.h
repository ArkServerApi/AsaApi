#pragma once


enum class EMediaTextureSampleFormat:int
{
	Undefined = 0x0,
	CharAYUV = 0x1,
	CharBGRA = 0x2,
	CharBGR10A2 = 0x3,
	CharBMP = 0x4,
	CharNV12 = 0x5,
	CharNV21 = 0x6,
	CharUYVY = 0x7,
	CharYUY2 = 0x8,
	CharYVYU = 0x9,
	FloatRGB = 0xA,
	FloatRGBA = 0xB,
	YUVv210 = 0xC,
	Y416 = 0xD,
	P010 = 0xE,
	DXT1 = 0xF,
	DXT5 = 0x10,
	YCoCg_DXT5 = 0x11,
	YCoCg_DXT5_Alpha_BC4 = 0x12,
	P010_RGB1010102 = 0x13
};