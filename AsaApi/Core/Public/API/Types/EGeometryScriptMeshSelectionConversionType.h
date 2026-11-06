#pragma once


enum class EGeometryScriptMeshSelectionConversionType:unsigned char
{
	NoConversion = 0x0,
	ToVertices = 0x1,
	ToTriangles = 0x2,
	ToPolygroups = 0x3
};