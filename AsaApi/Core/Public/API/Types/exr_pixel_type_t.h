#pragma once


enum class exr_pixel_type_t:int
{
	EXR_PIXEL_UINT = 0x0,
	EXR_PIXEL_HALF = 0x1,
	EXR_PIXEL_FLOAT = 0x2,
	EXR_PIXEL_LAST_TYPE = 0x3
};