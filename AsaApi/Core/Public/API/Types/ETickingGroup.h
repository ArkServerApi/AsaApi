#pragma once


enum class ETickingGroup:int
{
	TG_PrePhysics = 0x0,
	TG_StartPhysics = 0x1,
	TG_DuringPhysics = 0x2,
	TG_EndPhysics = 0x3,
	TG_PostPhysics = 0x4,
	TG_PostUpdateWork = 0x5,
	TG_LastDemotable = 0x6,
	TG_NewlySpawned = 0x7,
	TG_MAX = 0x8
};