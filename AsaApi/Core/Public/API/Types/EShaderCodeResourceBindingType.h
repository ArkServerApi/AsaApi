#pragma once


enum class EShaderCodeResourceBindingType:unsigned char
{
	Invalid = 0x0,
	SamplerState = 0x1,
	Texture2D = 0x2,
	Texture2DArray = 0x3,
	Texture2DMS = 0x4,
	Texture3D = 0x5,
	TextureCube = 0x6,
	TextureCubeArray = 0x7,
	TextureMetadata = 0x8,
	Buffer = 0x9,
	StructuredBuffer = 0xA,
	ByteAddressBuffer = 0xB,
	RaytracingAccelerationStructure = 0xC,
	RWTexture2D = 0xD,
	RWTexture2DArray = 0xE,
	RWTexture3D = 0xF,
	RWTextureCube = 0x10,
	RWTextureMetadata = 0x11,
	RWBuffer = 0x12,
	RWStructuredBuffer = 0x13,
	RWByteAddressBuffer = 0x14,
	RasterizerOrderedTexture2D = 0x15,
	MAX = 0x16
};