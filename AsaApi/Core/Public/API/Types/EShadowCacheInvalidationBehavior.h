#pragma once


enum class EShadowCacheInvalidationBehavior:unsigned char
{
	Auto = 0x0,
	Always = 0x1,
	Rigid = 0x2,
	Static = 0x3
};