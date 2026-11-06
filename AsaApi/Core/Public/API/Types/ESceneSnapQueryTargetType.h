#pragma once


enum class ESceneSnapQueryTargetType:unsigned char
{
	None = 0x0,
	MeshVertex = 0x1,
	MeshEdge = 0x2,
	Grid = 0x4,
	All = 0x7
};