#pragma once


namespace EChatMessageType
{
	enum Type:int
	{
		MyMessage = 0x0,
		SameTeamMessage = 0x1,
		DifferentTeamMessage = 0x2,
		SystemWideMessage = 0x3,
		SameAllianceMessage = 0x4,
		AdminMessage = 0x5,
		MAX = 0x6
	};
}