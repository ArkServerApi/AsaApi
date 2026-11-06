#pragma once


enum class EMaterialTextureParameterType:unsigned int
{
	Standard2D = 0x0,
	Cube = 0x1,
	Array2D = 0x2,
	ArrayCube = 0x3,
	Volume = 0x4,
	Virtual = 0x5,
	Count = 0x6
};