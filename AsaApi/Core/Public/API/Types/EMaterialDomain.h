#pragma once


enum class EMaterialDomain:int
{
	MD_Surface = 0x0,
	MD_DeferredDecal = 0x1,
	MD_LightFunction = 0x2,
	MD_Volume = 0x3,
	MD_PostProcess = 0x4,
	MD_UI = 0x5,
	MD_RuntimeVirtualTexture = 0x6,
	MD_Compute = 0x7,
	MD_MAX = 0x8
};