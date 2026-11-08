#pragma once


namespace ECompilationResult
{
	enum Type:int
	{
		Succeeded = 0x0,
		Canceled = 0x1,
		UpToDate = 0x2,
		CrashOrAssert = 0x3,
		FailedDueToHeaderChange = 0x4,
		FailedDueToEngineChange = 0x5,
		OtherCompilationError = 0x6,
		LiveCodingLimitError = 0x7,
		Unsupported = 0x8,
		Unknown = 0x9
	};
}