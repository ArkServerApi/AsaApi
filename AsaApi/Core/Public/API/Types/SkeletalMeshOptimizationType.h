#pragma once


enum class SkeletalMeshOptimizationType:int
{
	SMOT_NumOfTriangles = 0x0,
	SMOT_MaxDeviation = 0x1,
	SMOT_TriangleOrDeviation = 0x2,
	SMOT_MAX = 0x3
};