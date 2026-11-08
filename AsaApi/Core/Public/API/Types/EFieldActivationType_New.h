#pragma once


namespace EFieldActivationType_New
{
	enum Type:int
	{
		Delay = 0x0,
		OnTick = 0x1,
		OnTickWithDelay = 0x2,
		Trigger = 0x3,
		MAX = 0x4
	};
}