#pragma once


enum class EGameplayDebuggerShape:unsigned char
{
	Invalid = 0x0,
	Point = 0x1,
	Segment = 0x2,
	Box = 0x3,
	Cone = 0x4,
	Cylinder = 0x5,
	Circle = 0x6,
	Capsule = 0x7,
	Polygon = 0x8,
	Arrow = 0x9
};