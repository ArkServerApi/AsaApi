#pragma once


enum class EParticleSubUVInterpMethod:int
{
	PSUVIM_None = 0x0,
	PSUVIM_Linear = 0x1,
	PSUVIM_Linear_Blend = 0x2,
	PSUVIM_Random = 0x3,
	PSUVIM_Random_Blend = 0x4,
	PSUVIM_MAX = 0x5
};