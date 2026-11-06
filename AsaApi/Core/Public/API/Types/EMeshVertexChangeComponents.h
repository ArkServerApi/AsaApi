#pragma once


enum class EMeshVertexChangeComponents:unsigned char
{
	None = 0x0,
	VertexPositions = 0x1,
	VertexColors = 0x2,
	OverlayNormals = 0x10
};