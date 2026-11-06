#pragma once


enum class EGLTFMaterialPropertyGroup:unsigned char
{
	None = 0x0,
	BaseColorOpacity = 0x1,
	MetallicRoughness = 0x2,
	EmissiveColor = 0x3,
	Normal = 0x4,
	AmbientOcclusion = 0x5,
	ClearCoatRoughness = 0x6,
	ClearCoatBottomNormal = 0x7
};