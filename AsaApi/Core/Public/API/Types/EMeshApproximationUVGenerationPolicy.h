#pragma once


enum class EMeshApproximationUVGenerationPolicy:unsigned char
{
	PreferUVAtlas = 0x0,
	PreferXAtlas = 0x1,
	PreferPatchBuilder = 0x2
};