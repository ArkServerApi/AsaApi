#pragma once


enum class EHoudiniInputType:unsigned char
{
	Invalid = 0x0,
	Geometry = 0x1,
	Curve = 0x2,
	Asset = 0x3,
	Landscape = 0x4,
	World = 0x5,
	Skeletal = 0x6,
	GeometryCollection = 0x7
};