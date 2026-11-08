#pragma once


enum class EInstallBundleReleaseResult:int
{
	OK = 0x0,
	ManifestArchiveError = 0x1,
	UserCancelledError = 0x2,
	Count = 0x3
};