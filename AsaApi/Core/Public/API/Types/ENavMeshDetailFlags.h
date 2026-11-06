#pragma once


enum class ENavMeshDetailFlags:unsigned char
{
	TriangleEdges = 0x0,
	PolyEdges = 0x1,
	BoundaryEdges = 0x2,
	FilledPolys = 0x3,
	TileBounds = 0x4,
	PathCollidingGeometry = 0x5,
	TileLabels = 0x6,
	PolygonLabels = 0x7,
	PolygonCost = 0x8,
	PolygonFlags = 0x9,
	PathLabels = 0xA,
	NavLinks = 0xB,
	FailedNavLinks = 0xC,
	Clusters = 0xD,
	NavOctree = 0xE,
	NavOctreeDetails = 0xF,
	MarkForbiddenPolys = 0x10,
	TileBuildTimes = 0x11,
	TileBuildTimesHeatMap = 0x12,
	TileResolutions = 0x13
};