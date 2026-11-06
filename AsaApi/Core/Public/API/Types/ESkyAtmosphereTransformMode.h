#pragma once


enum class ESkyAtmosphereTransformMode:unsigned char
{
	PlanetTopAtAbsoluteWorldOrigin = 0x0,
	PlanetTopAtComponentTransform = 0x1,
	PlanetCenterAtComponentTransform = 0x2
};