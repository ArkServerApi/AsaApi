#pragma once


enum class ESpatialDenoiserType:int
{
	NONE = 0xFF,
	SPATIAL_DENOISER_PLUGIN = 0x0,
	SPATIAL_TEMPORAL_DENOISER_PLUGIN = 0x1,
	MAX = 0x2
};