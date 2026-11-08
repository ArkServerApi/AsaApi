#pragma once


enum class EHairLightingIntegrationType:unsigned char
{
	SceneColor = 0x0,
	AdHoc = 0x1,
	Uniform = 0x2,
	SH = 0x3,
	Count = 0x4
};