#pragma once


enum class EGeometryScriptFillHolesMethod:unsigned char
{
	Automatic = 0x0,
	MinimalFill = 0x1,
	PolygonTriangulation = 0x2,
	TriangleFan = 0x3,
	PlanarProjection = 0x4
};