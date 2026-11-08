#pragma once


namespace ENavigationBuildLock
{
	enum Type:int
	{
		NoUpdateInEditor = 0x2,
		NoUpdateInPIE = 0x4,
		InitialLock = 0x8,
		Custom = 0x10
	};
}