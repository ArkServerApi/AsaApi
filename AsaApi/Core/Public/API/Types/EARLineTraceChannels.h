#pragma once


enum class EARLineTraceChannels:unsigned char
{
	None = 0x0,
	FeaturePoint = 0x1,
	GroundPlane = 0x2,
	PlaneUsingExtent = 0x4,
	PlaneUsingBoundaryPolygon = 0x8
};