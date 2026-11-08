#pragma once


namespace PhysCommand
{
	enum Type:int
	{
		Release = 0x0,
		ReleasePScene = 0x1,
		DeleteCPUDispatcher = 0x2,
		DeleteSimEventCallback = 0x3,
		DeleteContactModifyCallback = 0x4,
		DeleteCCDContactModifyCallback = 0x5,
		DeleteMbpBroadphaseCallback = 0x6,
		Max = 0x7
	};
}