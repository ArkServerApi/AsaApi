#pragma once


enum class EVectorNoiseFunction:int
{
	VNF_CellnoiseALU = 0x0,
	VNF_VectorALU = 0x1,
	VNF_GradientALU = 0x2,
	VNF_CurlALU = 0x3,
	VNF_VoronoiALU = 0x4,
	VNF_MAX = 0x5
};