#pragma once


enum class EUpscaleMethod:unsigned char
{
	Nearest = 0x0,
	Bilinear = 0x1,
	Directional = 0x2,
	CatmullRom = 0x3,
	Lanczos = 0x4,
	Gaussian = 0x5,
	SmoothStep = 0x6,
	MAX = 0x7
};