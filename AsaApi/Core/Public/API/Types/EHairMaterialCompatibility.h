#pragma once


enum class EHairMaterialCompatibility:unsigned char
{
	Valid = 0x0,
	Invalid_UsedWithHairStrands = 0x1,
	Invalid_ShadingModel = 0x2,
	Invalid_BlendMode = 0x3,
	Invalid_IsNull = 0x4
};