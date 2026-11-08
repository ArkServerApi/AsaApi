#pragma once


enum class EMeshInspectorMaterialMode:unsigned char
{
	Original = 0x0,
	FlatShaded = 0x1,
	Grey = 0x2,
	Transparent = 0x3,
	TangentNormal = 0x4,
	VertexColor = 0x5,
	GroupColor = 0x6,
	Checkerboard = 0x7,
	Override = 0x8
};