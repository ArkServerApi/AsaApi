#pragma once


enum class ELightmapUVVersion:int
{
	BitByBit = 0x0,
	Segments = 0x1,
	SmallChartPacking = 0x2,
	ScaleChartsOrderingFix = 0x3,
	ChartJoiningLFix = 0x4,
	Allocator2DFlipFix = 0x5,
	ConsiderLightmapPadding = 0x6,
	ForceLightmapPadding = 0x7,
	Segments2D = 0x8,
	OptimalSurfaceArea = 0x9,
	ScaleByEdgesLength = 0xA,
	Latest = 0xA
};