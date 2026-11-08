#pragma once


enum class TCP_UPLOAD_REASON:int
{
	LowActivity = 0x1,
	HighDropRate = 0x2,
	SmallIO = 0x3,
	NoBufferPreposting = 0x4,
	NoBufferProposting = 0x4,
	ReceivedUrgentData = 0x5,
	HighFragmentation = 0x6,
	HighOutOfOrderPackets = 0x7,
	TimeoutExpiration = 0x8,
	InvalidState = 0x9,
	UploadRequested = 0xA,
	HardwareFailure = 0xB,
	MaxUploadReason = 0xC
};