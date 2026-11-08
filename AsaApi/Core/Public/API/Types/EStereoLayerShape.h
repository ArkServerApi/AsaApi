#pragma once


enum class EStereoLayerShape:int
{
	SLSH_QuadLayer = 0x0,
	SLSH_CylinderLayer = 0x1,
	SLSH_CubemapLayer = 0x2,
	SLSH_EquirectLayer = 0x3,
	SLSH_MAX = 0x4
};