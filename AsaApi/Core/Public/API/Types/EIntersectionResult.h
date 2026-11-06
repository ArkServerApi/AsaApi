#pragma once


enum class EIntersectionResult:int
{
	NotComputed = 0x0,
	Intersects = 0x1,
	NoIntersection = 0x2,
	InvalidQuery = 0x3
};