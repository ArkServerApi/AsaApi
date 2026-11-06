#pragma once


enum class EShadowDepthCacheMode:int
{
	SDCM_MovablePrimitivesOnly = 0x0,
	SDCM_StaticPrimitivesOnly = 0x1,
	SDCM_CSMScrolling = 0x2,
	SDCM_Uncached = 0x3
};