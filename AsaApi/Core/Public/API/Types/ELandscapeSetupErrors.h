#pragma once


enum class ELandscapeSetupErrors:int
{
	LSE_None = 0x0,
	LSE_NoLandscapeInfo = 0x1,
	LSE_CollsionXY = 0x2,
	LSE_NoLayerInfo = 0x3,
	LSE_MAX = 0x4
};