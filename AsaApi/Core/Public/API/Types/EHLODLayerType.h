#pragma once


enum class EHLODLayerType:unsigned char
{
	Instancing = 0x0,
	MeshMerge = 0x1,
	MeshSimplify = 0x2,
	MeshApproximate = 0x3,
	Custom = 0x4
};