#pragma once


enum class EDisplaceMeshToolDisplaceType:unsigned char
{
	Constant = 0x0,
	DisplacementMap = 0x1,
	RandomNoise = 0x2,
	PerlinNoise = 0x3,
	SineWave = 0x4
};