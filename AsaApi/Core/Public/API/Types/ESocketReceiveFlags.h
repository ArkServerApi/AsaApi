#pragma once


namespace ESocketReceiveFlags
{
	enum Type:int
	{
		None = 0x0,
		Peek = 0x2,
		WaitAll = 0x100
	};
}