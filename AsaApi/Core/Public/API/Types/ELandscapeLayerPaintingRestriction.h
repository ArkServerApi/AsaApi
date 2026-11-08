#pragma once


enum class ELandscapeLayerPaintingRestriction:unsigned char
{
	None = 0x0,
	UseMaxLayers = 0x1,
	ExistingOnly = 0x2,
	UseComponentAllowList = 0x3
};