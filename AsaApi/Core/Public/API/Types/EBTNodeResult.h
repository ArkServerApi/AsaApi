#pragma once


namespace EBTNodeResult
{
	enum Type:int
	{
		Succeeded = 0x0,
		Failed = 0x1,
		Aborted = 0x2,
		InProgress = 0x3
	};
}