#pragma once


enum class EParticleEventType:int
{
	EPET_Any = 0x0,
	EPET_Spawn = 0x1,
	EPET_Death = 0x2,
	EPET_Collision = 0x3,
	EPET_Burst = 0x4,
	EPET_Blueprint = 0x5,
	EPET_MAX = 0x6
};