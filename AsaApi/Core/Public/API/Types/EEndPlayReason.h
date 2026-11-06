#pragma once


namespace EEndPlayReason
{
	enum Type:int
	{
		Destroyed = 0x0,
		LevelTransition = 0x1,
		EndPlayInEditor = 0x2,
		RemovedFromWorld = 0x3,
		Quit = 0x4
	};
}