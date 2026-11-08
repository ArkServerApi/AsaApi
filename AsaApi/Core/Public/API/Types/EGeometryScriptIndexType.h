#pragma once


enum class EGeometryScriptIndexType:unsigned char
{
	Any = 0x0,
	Triangle = 0x1,
	Vertex = 0x2,
	MaterialID = 0x3,
	PolygroupID = 0x4
};