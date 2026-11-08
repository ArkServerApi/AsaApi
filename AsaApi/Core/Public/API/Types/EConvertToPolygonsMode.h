#pragma once


enum class EConvertToPolygonsMode:int
{
	FaceNormalDeviation = 0x0,
	FindPolygons = 0x1,
	FromUVIslands = 0x2,
	FromNormalSeams = 0x3,
	FromConnectedTris = 0x4,
	FromFurthestPointSampling = 0x5,
	CopyFromLayer = 0x6
};