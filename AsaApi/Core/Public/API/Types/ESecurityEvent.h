#pragma once


namespace ESecurityEvent
{
	enum Type:int
	{
		Malformed_Packet = 0x0,
		Invalid_Data = 0x1,
		Closed = 0x2
	};
}