#pragma once


enum class EClusterUnionMethod:unsigned char
{
	PointImplicit = 0x0,
	DelaunayTriangulation = 0x1,
	MinimalSpanningSubsetDelaunayTriangulation = 0x2,
	PointImplicitAugmentedWithMinimalDelaunay = 0x3,
	BoundsOverlapFilteredDelaunayTriangulation = 0x4,
	None = 0x5
};