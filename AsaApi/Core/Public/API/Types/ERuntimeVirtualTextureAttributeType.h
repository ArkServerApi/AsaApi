#pragma once


enum class ERuntimeVirtualTextureAttributeType:unsigned char
{
	BaseColor = 0x0,
	Normal = 0x1,
	Roughness = 0x2,
	Specular = 0x3,
	Mask = 0x4,
	WorldHeight = 0x5,
	Count = 0x6
};