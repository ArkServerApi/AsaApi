#pragma once


enum class EComputeNTBsFlags:unsigned int
{
	None = 0x0,
	Normals = 0x1,
	Tangents = 0x2,
	UseMikkTSpace = 0x4,
	WeightedNTBs = 0x8,
	BlendOverlappingNormals = 0x10,
	IgnoreDegenerateTriangles = 0x20
};