#pragma once


namespace ELoadingPhase
{
	enum Type:int
	{
		EarliestPossible = 0x0,
		PostConfigInit = 0x1,
		PostSplashScreen = 0x2,
		PreEarlyLoadingScreen = 0x3,
		PreLoadingScreen = 0x4,
		PreDefault = 0x5,
		Default = 0x6,
		PostDefault = 0x7,
		PostEngineInit = 0x8,
		None = 0x9,
		Max = 0xA
	};
}