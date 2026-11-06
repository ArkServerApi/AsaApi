#pragma once


enum class ESurfaceCacheCompression:unsigned char
{
	Disabled = 0x0,
	UAVAliasing = 0x1,
	CopyTextureRegion = 0x2
};