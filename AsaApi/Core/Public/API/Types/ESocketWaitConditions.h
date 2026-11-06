#pragma once


namespace ESocketWaitConditions
{
	enum Type:int
	{
		WaitForRead = 0x0,
		WaitForWrite = 0x1,
		WaitForReadOrWrite = 0x2
	};
}