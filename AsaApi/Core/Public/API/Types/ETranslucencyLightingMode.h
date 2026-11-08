#pragma once


enum class ETranslucencyLightingMode:int
{
	TLM_VolumetricNonDirectional = 0x0,
	TLM_VolumetricDirectional = 0x1,
	TLM_VolumetricPerVertexNonDirectional = 0x2,
	TLM_VolumetricPerVertexDirectional = 0x3,
	TLM_Surface = 0x4,
	TLM_SurfacePerPixelLighting = 0x5,
	TLM_MAX = 0x6
};