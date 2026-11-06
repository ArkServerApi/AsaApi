#pragma once


enum class EParticleCollisionShaderMode:int
{
	PCM_None = 0x0,
	PCM_DepthBuffer = 0x1,
	PCM_DistanceField = 0x2
};