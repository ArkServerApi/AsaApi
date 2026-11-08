#pragma once


enum class EShadowOcclusionQueryIntersectionMode:int
{
	SOQ_None = 0x0,
	SOQ_LightInfluenceSphere = 0x1,
	SOQ_NearPlaneVsShadowFrustum = 0x2
};