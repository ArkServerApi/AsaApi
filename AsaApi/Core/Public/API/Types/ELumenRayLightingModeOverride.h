#pragma once


enum class ELumenRayLightingModeOverride:unsigned char
{
	Default = 0x0,
	SurfaceCache = 0x1,
	HitLighting = 0x2
};