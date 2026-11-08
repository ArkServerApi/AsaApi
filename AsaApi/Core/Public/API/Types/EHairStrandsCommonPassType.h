#pragma once


enum class EHairStrandsCommonPassType:int
{
	Composition = 0x0,
	DOF = 0x1,
	TAAFastResolve = 0x2,
	GBuffer = 0x3,
	Blit = 0x4
};