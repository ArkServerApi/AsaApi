#pragma once


namespace EMissionState
{
	enum Type:int
	{
		ServerSetup = 0x0,
		Activated = 0x1,
		Suspended = 0x2,
		Deactivated = 0x3
	};
}