#pragma once


enum class EGeometryScriptPolyOperationArea:unsigned char
{
	EntireSelection = 0x0,
	PerPolygroup = 0x1,
	PerTriangle = 0x2
};