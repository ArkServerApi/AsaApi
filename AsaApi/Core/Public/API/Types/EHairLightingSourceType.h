#pragma once


enum class EHairLightingSourceType:unsigned char
{
	SceneColor = 0x0,
	ReflectionProbe = 0x1,
	Lumen = 0x2,
	Count = 0x3
};