#pragma once


enum class ERevolvePropertiesPolygroupMode:unsigned char
{
	PerShape = 0x0,
	PerFace = 0x1,
	PerRevolveStep = 0x2,
	PerPathSegment = 0x3
};