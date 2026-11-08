#pragma once


namespace EPawnActionAbortState
{
	enum Type:int
	{
		NeverStarted = 0x0,
		NotBeingAborted = 0x1,
		MarkPendingAbort = 0x2,
		LatentAbortInProgress = 0x3,
		AbortDone = 0x4,
		MAX = 0x5
	};
}