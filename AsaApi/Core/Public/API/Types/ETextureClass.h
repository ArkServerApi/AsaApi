#pragma once


enum class ETextureClass:unsigned char
{
	Invalid = 0x0,
	TwoD = 0x1,
	Cube = 0x2,
	Array = 0x3,
	CubeArray = 0x4,
	Volume = 0x5,
	TwoDDynamic = 0x6,
	RenderTarget = 0x7,
	Other2DNoSource = 0x8,
	OtherUnknown = 0x9
};