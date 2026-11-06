#pragma once


enum class EGenerateCompressedLayersTimeSliced:unsigned char
{
	Invalid = 0x0,
	Init = 0x1,
	CreateHeightField = 0x2,
	RasterizeTriangles = 0x3,
	EmptyLayers = 0x4,
	VoxelFilter = 0x5,
	RecastFilter = 0x6,
	CompactHeightField = 0x7,
	ErodeWalkable = 0x8,
	BuildLayers = 0x9,
	BuildTileCache = 0xA
};