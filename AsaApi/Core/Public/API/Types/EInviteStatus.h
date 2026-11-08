#pragma once


namespace EInviteStatus
{
	enum Type:int
	{
		Unknown = 0x0,
		Accepted = 0x1,
		PendingInbound = 0x2,
		PendingOutbound = 0x3,
		Blocked = 0x4,
		Suggested = 0x5
	};
}