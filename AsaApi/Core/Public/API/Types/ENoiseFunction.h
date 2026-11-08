#pragma once


enum class ENoiseFunction:int
{
	NOISEFUNCTION_SimplexTex = 0x0,
	NOISEFUNCTION_GradientTex = 0x1,
	NOISEFUNCTION_GradientTex3D = 0x2,
	NOISEFUNCTION_GradientALU = 0x3,
	NOISEFUNCTION_ValueALU = 0x4,
	NOISEFUNCTION_VoronoiALU = 0x5,
	NOISEFUNCTION_MAX = 0x6
};