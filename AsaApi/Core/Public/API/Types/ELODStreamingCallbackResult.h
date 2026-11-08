#pragma once


enum class ELODStreamingCallbackResult:int
{
	Success = 0x0,
	TimedOut = 0x1,
	AssetRemoved = 0x2,
	ComponentRemoved = 0x3,
	StreamingDisabled = 0x4,
	NotImplemented = 0x5
};