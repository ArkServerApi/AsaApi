#pragma once


enum class EGeometryScriptRemeshEdgeConstraintType:unsigned char
{
	Fixed = 0x0,
	Refine = 0x1,
	Free = 0x2,
	Ignore = 0x3
};