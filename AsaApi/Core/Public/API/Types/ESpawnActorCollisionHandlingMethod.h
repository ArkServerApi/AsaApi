#pragma once


enum class ESpawnActorCollisionHandlingMethod:unsigned char
{
	Undefined = 0x0,
	AlwaysSpawn = 0x1,
	AdjustIfPossibleButAlwaysSpawn = 0x2,
	AdjustIfPossibleButDontSpawnIfColliding = 0x3,
	DontSpawnIfColliding = 0x4
};