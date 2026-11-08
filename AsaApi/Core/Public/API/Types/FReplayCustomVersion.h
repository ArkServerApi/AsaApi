#pragma once


namespace FReplayCustomVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		ReplayInitial = 0x1,
		SaveAbsTimeMs = 0x2,
		IncreaseBuffer = 0x3,
		SaveEngineVersion = 0x4,
		ExtraVersion = 0x5,
		MultipleLevels = 0x6,
		MultipleLvelsTimeChanges = 0x7,
		DeletedStartupActors = 0x8,
		HeaderFlags = 0x9,
		LevelStreamingFixes = 0xA,
		SaveFullEngineVersion = 0xB,
		HeaderGuid = 0xC,
		CharacterMovement = 0xD,
		CharacterMovementNoInterp = 0xE,
		GuidNameTable = 0xF,
		GuidCacheChecksums = 0x10,
		SavePackageVersionUE = 0x11,
		RecordingMetadata = 0x12,
		CustomVersions = 0x13,
		VersionPlusOne = 0x14,
		LatestVersion = 0x13,
		MinSupportedVersion = 0xD
	};
}