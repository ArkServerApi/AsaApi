#pragma once


namespace EOnlinePresenceState
{
	enum Type: char
	{
		Online = 0x0,
		Offline = 0x1,
		Away = 0x2,
		ExtendedAway = 0x3,
		DoNotDisturb = 0x4,
		Chat = 0x5
	};
}