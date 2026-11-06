#pragma once


namespace ERenderThreadIdleTypes
{
	enum Type:int
	{
		WaitingForAllOtherSleep = 0x0,
		WaitingForGPUQuery = 0x1,
		WaitingForGPUPresent = 0x2,
		Num = 0x3
	};
}