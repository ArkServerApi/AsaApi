#pragma once


enum class EParticleScreenAlignment:int
{
	PSA_FacingCameraPosition = 0x0,
	PSA_Square = 0x1,
	PSA_Rectangle = 0x2,
	PSA_Velocity = 0x3,
	PSA_AwayFromCenter = 0x4,
	PSA_TypeSpecific = 0x5,
	PSA_FacingCameraDistanceBlend = 0x6,
	PSA_MAX = 0x7
};