#pragma once


enum class EAnalyticsSessionShutdownType:int
{
	Shutdown = 0x0,
	Terminated = 0x1,
	Debugged = 0x2,
	Crashed = 0x3,
	Abnormal = 0x4,
	Unknown = 0x5
};