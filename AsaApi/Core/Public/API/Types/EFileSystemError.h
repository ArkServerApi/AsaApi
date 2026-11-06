#pragma once


enum class EFileSystemError:unsigned char
{
	None = 0x0,
	FailedToReadFromDisk = 0x1,
	FailedToCreateDirectory = 0x2,
	FailedToSaveToDisk = 0x3,
	FailedToOpenFileForWrite = 0x4,
	FailedFileToLarge = 0x5,
	FailedGettingDiskSpaceInfo = 0x6,
	FailedReadOutOfBounds = 0x7
};