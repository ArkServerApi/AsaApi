#pragma once


namespace EPawnActionResult
{
	enum Type:int
	{
		NotStarted = 0x0,
		InProgress = 0x1,
		Success = 0x2,
		Failed = 0x3,
		Aborted = 0x4
	};
}