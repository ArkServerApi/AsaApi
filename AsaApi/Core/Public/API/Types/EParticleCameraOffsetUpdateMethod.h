#pragma once


enum class EParticleCameraOffsetUpdateMethod:int
{
	EPCOUM_DirectSet = 0x0,
	EPCOUM_Additive = 0x1,
	EPCOUM_Scalar = 0x2,
	EPCOUM_MAX = 0x3
};