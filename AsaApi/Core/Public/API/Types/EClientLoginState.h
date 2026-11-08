#pragma once


namespace EClientLoginState
{
	enum Type:int
	{
		Invalid = 0x0,
		LoggingIn = 0x1,
		Welcomed = 0x2,
		ReceivedJoin = 0x3,
		CleanedUp = 0x4
	};
}