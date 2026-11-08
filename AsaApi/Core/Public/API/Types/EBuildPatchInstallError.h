#pragma once


enum class EBuildPatchInstallError:int
{
	NoError = 0x0,
	DownloadError = 0x1,
	FileConstructionFail = 0x2,
	MoveFileToInstall = 0x3,
	BuildVerifyFail = 0x4,
	ApplicationClosing = 0x5,
	ApplicationError = 0x6,
	UserCanceled = 0x7,
	PrerequisiteError = 0x8,
	InitializationError = 0x9,
	PathLengthExceeded = 0xA,
	OutOfDiskSpace = 0xB,
	NumInstallErrors = 0xC
};