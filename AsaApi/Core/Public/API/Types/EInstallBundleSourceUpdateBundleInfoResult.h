#pragma once


enum class EInstallBundleSourceUpdateBundleInfoResult:unsigned char
{
	OK = 0x0,
	NotInitailized = 0x1,
	AlreadyMounted = 0x2,
	AlreadyRequested = 0x3,
	IllegalCacheStatus = 0x4,
	Count = 0x5
};