#pragma once


enum class SkeletalMeshTerminationCriterion:int
{
	SMTC_NumOfTriangles = 0x0,
	SMTC_NumOfVerts = 0x1,
	SMTC_TriangleOrVert = 0x2,
	SMTC_AbsNumOfTriangles = 0x3,
	SMTC_AbsNumOfVerts = 0x4,
	SMTC_AbsTriangleOrVert = 0x5,
	SMTC_MAX = 0x6
};