#pragma once


enum class ETemporalDenoiserType:int
{
	NONE = 0xFF,
	BUILTIN_TEMPORAL_DENOISER = 0x0,
	SPATIAL_TEMPORAL_DENOISER_PLUGIN = 0x1,
	MAX = 0x2
};