#pragma once


enum class EMeshInspectorToolDrawIndexMode:unsigned char
{
	None = 0x0,
	VertexID = 0x1,
	TriangleID = 0x2,
	GroupID = 0x3,
	EdgeID = 0x4
};