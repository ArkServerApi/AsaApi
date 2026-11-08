#pragma once


namespace FLocalFileReplayCustomVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		FixedSizeFriendlyName = 0x1,
		CompressionSupport = 0x2,
		RecordingTimestamp = 0x3,
		StreamChunkTimes = 0x4,
		FriendlyNameCharEncoding = 0x5,
		EncryptionSupport = 0x6,
		CustomVersions = 0x7,
		VersionPlusOne = 0x8,
		LatestVersion = 0x7
	};
}