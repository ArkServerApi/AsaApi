#pragma once


enum class EParticleAxisLock:int
{
	EPAL_NONE = 0x0,
	EPAL_X = 0x1,
	EPAL_Y = 0x2,
	EPAL_Z = 0x3,
	EPAL_NEGATIVE_X = 0x4,
	EPAL_NEGATIVE_Y = 0x5,
	EPAL_NEGATIVE_Z = 0x6,
	EPAL_ROTATE_X = 0x7,
	EPAL_ROTATE_Y = 0x8,
	EPAL_ROTATE_Z = 0x9,
	EPAL_MAX = 0xA
};