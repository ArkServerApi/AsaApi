#pragma once


enum class EFullyLoadPackageType:int
{
	FULLYLOAD_Map = 0x0,
	FULLYLOAD_Game_PreLoadClass = 0x1,
	FULLYLOAD_Game_PostLoadClass = 0x2,
	FULLYLOAD_Always = 0x3,
	FULLYLOAD_Mutator = 0x4,
	FULLYLOAD_MAX = 0x5
};