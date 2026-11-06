#pragma once


enum class ETextureDimension:unsigned char
{
	Texture2D = 0x0,
	Texture2DArray = 0x1,
	Texture3D = 0x2,
	TextureCube = 0x3,
	TextureCubeArray = 0x4
};