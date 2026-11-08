#pragma once


enum class EHairAtlasTextureType:unsigned char
{
	Depth = 0x0,
	Tangent = 0x1,
	Attribute = 0x2,
	Coverage = 0x3,
	AuxilaryData = 0x4,
	Material = 0x5
};