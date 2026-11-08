#pragma once


enum class ECFCoreErrorCodes:unsigned char
{
	None = 0x0,
	ApiError = 0x1,
	FileSystemError = 0x2,
	FailedToInitialize = 0x3,
	AlreadyInitialized = 0x4,
	NotImplemented = 0x5,
	InvalidModParams = 0x6,
	InstalledModNotFound = 0x7,
	InstallCancelled = 0x8,
	DownloadCancelled = 0x9,
	UploadCancelled = 0xA,
	MissingModsDirectory = 0xB,
	MissingModsDirectoryMode = 0xC,
	MissingUserDataDirectory = 0xD,
	FailedToLoadModsStateFromDisk = 0xE,
	FailedToSaveModsStateToDisk = 0xF,
	MissingLatestFileInformation = 0x10,
	MissingFileInformation = 0x11,
	FileNotBelongingToMod = 0x12,
	NoPlatformFilesMatched = 0x13,
	MissingInstalledMods = 0x14,
	DetectedUnavailableMod = 0x15,
	ModAlreadyBeingInstalled = 0x16,
	FailedToDownloadFile = 0x17,
	DownloadedFileHasInvalidHash = 0x18,
	FailedDeletingOutputDirectory = 0x19,
	FailedDeletingOutputFile = 0x1A,
	FailedToUnzip = 0x1B,
	FailedToMoveModDirectory = 0x1C,
	FailedSettingAuthToken = 0x1D,
	UserNotAuthenticated = 0x1E,
	FailedToCancelAction = 0x1F,
	MissingParameter = 0x20
};