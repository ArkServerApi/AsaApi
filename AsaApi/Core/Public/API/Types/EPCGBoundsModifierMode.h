#pragma once


enum class EPCGBoundsModifierMode:unsigned char
{
	Set = 0x0,
	Intersect = 0x1,
	Include = 0x2,
	Translate = 0x3,
	Scale = 0x4
};