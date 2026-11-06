#pragma once


namespace EMessageSeverity
{
	enum Type:int
	{
		CriticalError = 0x0,
		Error = 0x1,
		PerformanceWarning = 0x2,
		Warning = 0x3,
		Info = 0x4
	};
}