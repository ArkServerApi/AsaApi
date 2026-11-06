#pragma once


namespace EOnlineSessionState
{
	enum Type:int
	{
		NoSession = 0x0,
		Creating = 0x1,
		Pending = 0x2,
		Starting = 0x3,
		InProgress = 0x4,
		Ending = 0x5,
		Ended = 0x6,
		Destroying = 0x7
	};
}