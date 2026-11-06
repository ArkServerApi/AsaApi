#pragma once


enum class EDoWorkTimeSlicedState:unsigned char
{
	Invalid = 0x0,
	GatherGeometryFromSources = 0x1,
	GenerateTile = 0x2
};