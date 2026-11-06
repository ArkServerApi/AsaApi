#pragma once


enum class ELibraryProgressState:unsigned char
{
	Pending = 0x0,
	Downloading = 0x1,
	Uploading = 0x2,
	Validating = 0x3,
	PendingUnzipping = 0x4,
	Unzipping = 0x5,
	PendingZipping = 0x6,
	Zipping = 0x7,
	Copying = 0x8,
	CleaningUp = 0x9,
	Cancelling = 0xA,
	SuccessfullyCompleted = 0xB,
	FailedToComplete = 0xC
};