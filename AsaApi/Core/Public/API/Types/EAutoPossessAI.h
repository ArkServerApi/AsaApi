#pragma once


enum class EAutoPossessAI:unsigned char
{
	Disabled = 0x0,
	PlacedInWorld = 0x1,
	Spawned = 0x2,
	PlacedInWorldOrSpawned = 0x3
};