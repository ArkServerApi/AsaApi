#pragma once


enum class BINKPLUGINBUFFERING:int
{
	BinkStream = 0x0,
	BinkPreloadAll = 0x1,
	BinkStreamUntilResident = 0x2
};