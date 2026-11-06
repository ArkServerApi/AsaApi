#pragma once


namespace EBlueprintExceptionType
{
	enum Type:int
	{
		Breakpoint = 0x0,
		Tracepoint = 0x1,
		WireTracepoint = 0x2,
		AccessViolation = 0x3,
		InfiniteLoop = 0x4,
		NonFatalError = 0x5,
		FatalError = 0x6,
		AbortExecution = 0x7
	};
}