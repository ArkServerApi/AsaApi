#pragma once


enum class ELumenSurfaceCacheLayer:unsigned char
{
	Depth = 0x0,
	Albedo = 0x1,
	Opacity = 0x2,
	Normal = 0x3,
	Emissive = 0x4,
	MAX = 0x5
};