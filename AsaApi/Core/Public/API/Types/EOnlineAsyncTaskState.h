#pragma once


namespace EOnlineAsyncTaskState
{
	enum Type:int
	{
		NotStarted = 0x0,
		InProgress = 0x1,
		Done = 0x2,
		Failed = 0x3
	};
}