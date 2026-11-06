#pragma once


enum class ELightComponentType:int
{
	LightType_Directional = 0x0,
	LightType_Point = 0x1,
	LightType_Spot = 0x2,
	LightType_Rect = 0x3,
	LightType_MAX = 0x4,
	LightType_NumBits = 0x2
};