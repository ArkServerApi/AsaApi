#pragma once


namespace EPawnActionEventType
{
	enum Type:int
	{
		Invalid = 0x0,
		FailedToStart = 0x1,
		InstantAbort = 0x2,
		FinishedAborting = 0x3,
		FinishedExecution = 0x4,
		Push = 0x5
	};
}