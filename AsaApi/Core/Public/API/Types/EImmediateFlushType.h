#pragma once


namespace EImmediateFlushType
{
	enum Type:int
	{
		WaitForOutstandingTasksOnly = 0x0,
		DispatchToRHIThread = 0x1,
		FlushRHIThread = 0x2,
		FlushRHIThreadFlushResources = 0x3
	};
}