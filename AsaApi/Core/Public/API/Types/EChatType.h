#pragma once


namespace EChatType
{
	enum Type:int
	{
		GlobalChat = 0x0,
		ProximityChat = 0x1,
		RadioChat = 0x2,
		GlobalTribeChat = 0x3,
		AllianceChat = 0x4,
		MAX = 0x5
	};
}