#pragma once


namespace FSequencerObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		RenameMediaSourcePlatformPlayers = 0x1,
		ConvertEnableRootMotionToForceRootLock = 0x2,
		ConvertMultipleRowsToTracks = 0x3,
		WhenFinishedDefaultsToRestoreState = 0x4,
		EvaluationTree = 0x5,
		WhenFinishedDefaultsToProjectDefault = 0x6,
		FloatToIntConversion = 0x7,
		PurgeSpawnableBlueprints = 0x8,
		FinishUMGEvaluation = 0x9,
		SerializeFloatChannel = 0xA,
		ModifyLinearKeysForOldInterp = 0xB,
		SerializeFloatChannelCompletely = 0xC,
		SpawnableImprovements = 0xD,
		VersionPlusOne = 0xE,
		LatestVersion = 0xD
	};
}