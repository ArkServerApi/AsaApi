#pragma once


enum class EIntersectionType:int
{
	Empty = 0x0,
	Point = 0x1,
	Segment = 0x2,
	Line = 0x3,
	Polygon = 0x4,
	Plane = 0x5,
	MultiSegment = 0x6,
	Unknown = 0x7
};