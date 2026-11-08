#pragma once


enum class EParticleCollisionComplete:int
{
	EPCC_Kill = 0x0,
	EPCC_Freeze = 0x1,
	EPCC_HaltCollisions = 0x2,
	EPCC_FreezeTranslation = 0x3,
	EPCC_FreezeRotation = 0x4,
	EPCC_FreezeMovement = 0x5,
	EPCC_MAX = 0x6
};