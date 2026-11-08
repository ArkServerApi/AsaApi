#pragma once


enum class EMeshApproximationBaseCappingType:unsigned char
{
	NoBaseCapping = 0x0,
	ConvexPolygon = 0x1,
	ConvexSolid = 0x2
};