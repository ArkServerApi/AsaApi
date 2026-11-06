#pragma once


namespace EDemoPlayFailure
{
	enum Type:int
	{
		Generic = 0x0,
		DemoNotFound = 0x1,
		Corrupt = 0x2,
		InvalidVersion = 0x3,
		InitBase = 0x4,
		GameSpecificHeader = 0x5,
		ReplayStreamerInternal = 0x6,
		LoadMap = 0x7,
		Serialization = 0x8
	};
}