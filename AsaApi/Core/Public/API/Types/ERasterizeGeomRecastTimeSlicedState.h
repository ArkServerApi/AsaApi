#pragma once


enum class ERasterizeGeomRecastTimeSlicedState:unsigned char
{
	MarkWalkableTriangles = 0x0,
	RasterizeTriangles = 0x1
};