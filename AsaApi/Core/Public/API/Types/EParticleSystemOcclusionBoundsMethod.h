#pragma once


enum class EParticleSystemOcclusionBoundsMethod:int
{
	EPSOBM_None = 0x0,
	EPSOBM_ParticleBounds = 0x1,
	EPSOBM_CustomBounds = 0x2
};