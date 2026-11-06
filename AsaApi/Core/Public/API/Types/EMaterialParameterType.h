#pragma once


enum class EMaterialParameterType:unsigned char
{
	Scalar = 0x0,
	Vector = 0x1,
	DoubleVector = 0x2,
	Texture = 0x3,
	Font = 0x4,
	RuntimeVirtualTexture = 0x5,
	SparseVolumeTexture = 0x6,
	StaticSwitch = 0x7,
	NumRuntime = 0x8,
	StaticComponentMask = 0x8,
	Num = 0x9,
	None = 0xFF
};