#pragma once


enum class EPCGMeshSamplingMethod:int
{
	OnePointPerTriangle = 0x0,
	OnePointPerVertex = 0x1,
	PoissonSampling = 0x2
};