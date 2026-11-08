#pragma once


enum class EInstallBundleRequestFlags:unsigned int
{
	None = 0x0,
	CheckForCellularDataUsage = 0x1,
	UseBackgroundDownloads = 0x2,
	SendNotificationIfDownloadCompletesInBackground = 0x4,
	ForceNoPatching = 0x8,
	TrackPersistentBundleStats = 0x10,
	SkipMount = 0x20,
	AsyncMount = 0x40,
	Defaults = 0x2
};