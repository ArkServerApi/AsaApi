#pragma once


enum class exr_tile_level_mode_t:int
{
	EXR_TILE_ONE_LEVEL = 0x0,
	EXR_TILE_MIPMAP_LEVELS = 0x1,
	EXR_TILE_RIPMAP_LEVELS = 0x2,
	EXR_TILE_LAST_TYPE = 0x3
};