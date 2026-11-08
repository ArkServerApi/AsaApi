#pragma once


enum class EInstallBundleCacheReserveResult:signed char
{
	Fail_CacheFull = 0x0,
	Fail_NeedsEvict = 0x1,
	Fail_PendingEvict = 0x2,
	Success = 0x3
};