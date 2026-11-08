#pragma once


enum class ETextureSamplerFilter:unsigned char
{
	Point = 0x0,
	Bilinear = 0x1,
	Trilinear = 0x2,
	AnisotropicPoint = 0x3,
	AnisotropicLinear = 0x4
};