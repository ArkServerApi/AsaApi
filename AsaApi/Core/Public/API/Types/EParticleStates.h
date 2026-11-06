#pragma once


enum class EParticleStates:unsigned __int64
{
	STATE_Particle_JustSpawned = 0x2000000,
	STATE_Particle_Freeze = 0x4000000,
	STATE_Particle_IgnoreCollisions = 0x8000000,
	STATE_Particle_FreezeTranslation = 0x10000000,
	STATE_Particle_FreezeRotation = 0x20000000,
	STATE_Particle_CollisionIgnoreCheck = 0x3C000000,
	STATE_Particle_DelayCollisions = 0x40000000,
	STATE_Particle_CollisionHasOccurred = 0x80000000,
	STATE_Mask = 0xFE000000,
	STATE_CounterMask = 0x1FFFFFF
};