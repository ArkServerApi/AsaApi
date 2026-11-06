#pragma once


enum class WICBitmapInterpolationMode:int
{
	WICBitmapInterpolationModeNearestNeighbor = 0x0,
	WICBitmapInterpolationModeLinear = 0x1,
	WICBitmapInterpolationModeCubic = 0x2,
	WICBitmapInterpolationModeFant = 0x3,
	WICBitmapInterpolationModeHighQualityCubic = 0x4,
	WICBITMAPINTERPOLATIONMODE_FORCE_DWORD = 0x7FFFFFFF
};