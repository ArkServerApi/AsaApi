#pragma once


enum class EInstallBundleResult:int
{
	OK = 0x0,
	FailedPrereqRequiresLatestClient = 0x1,
	FailedPrereqRequiresLatestContent = 0x2,
	FailedCacheReserve = 0x3,
	InstallError = 0x4,
	InstallerOutOfDiskSpaceError = 0x5,
	ManifestArchiveError = 0x6,
	ConnectivityError = 0x7,
	UserCancelledError = 0x8,
	InitializationError = 0x9,
	InitializationPending = 0xA,
	Count = 0xB
};