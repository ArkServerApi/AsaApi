#pragma once


enum class EHoleFillOpFillType:unsigned char
{
	TriangleFan = 0x0,
	PolygonEarClipping = 0x1,
	Planar = 0x2,
	Minimal = 0x3,
	Smooth = 0x4
};