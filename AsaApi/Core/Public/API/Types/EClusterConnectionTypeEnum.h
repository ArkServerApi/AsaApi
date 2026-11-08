#pragma once


enum class EClusterConnectionTypeEnum:unsigned char
{
	Chaos_PointImplicit = 0x0,
	Chaos_DelaunayTriangulation = 0x1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 0x2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 0x3,
	Chaos_BoundsOverlapFilteredDelaunayTriangulation = 0x4,
	Chaos_None = 0x5,
	Chaos_EClsuterCreationParameters_Max = 0x6
};