#pragma once


namespace EChatSendMode
{
	enum Type:int
	{
		GlobalChat = 0x0,
		GlobalTribeChat = 0x1,
		LocalChat = 0x2,
		AllianceChat = 0x3,
		MAX = 0x4
	};
}