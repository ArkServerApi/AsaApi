#pragma once


enum class ECrashExitCodes:int
{
	MonitoredApplicationStillRunning = 0xBDB29,
	MonitoredApplicationExitCodeNotAvailable = 0xBDB2A,
	CrashReporterCrashed = 0xBDB2B,
	CrashHandlerCrashed = 0xBDB2C,
	OutOfProcessReporterExitedUnexpectedly = 0xBDB2D,
	CrashDuringStaticInit = 0xBDB2E,
	OutOfProcessReporterCheckFailed = 0xBDB2F,
	UnhandledEnsure = 0xBDB30
};