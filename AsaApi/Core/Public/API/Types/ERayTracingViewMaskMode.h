#pragma once


enum class ERayTracingViewMaskMode:unsigned char
{
	RayTracing = 0x0,
	PathTracing = 0x1,
	LightMapTracing = 0x2
};