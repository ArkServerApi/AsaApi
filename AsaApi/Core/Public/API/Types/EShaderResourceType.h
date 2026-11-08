#pragma once


enum class EShaderResourceType:unsigned char
{
	None = 0x0,
	Texture1D = 0x1,
	Texture2D = 0x2,
	Texture3D = 0x3,
	TextureCube = 0x4,
	Buffer = 0x5,
	StructuredBuffer = 0x6,
	ByteAddressBuffer = 0x7
};