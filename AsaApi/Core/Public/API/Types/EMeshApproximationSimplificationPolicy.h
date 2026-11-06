#pragma once


enum class EMeshApproximationSimplificationPolicy:unsigned char
{
	FixedTriangleCount = 0x0,
	TrianglesPerArea = 0x1,
	GeometricTolerance = 0x2
};