#pragma once


enum class EOpacitySourceMode:int
{
	OSM_Alpha = 0x0,
	OSM_ColorBrightness = 0x1,
	OSM_RedChannel = 0x2,
	OSM_GreenChannel = 0x3,
	OSM_BlueChannel = 0x4
};