#pragma once


enum class EStreamingOperationResult:int
{
	Success = 0x0,
	Unsupported = 0x1,
	ReplayNotFound = 0x2,
	ReplayCorrupt = 0x3,
	NotEnoughSpace = 0x4,
	NotEnoughSlots = 0x5,
	Unspecified = 0x6,
	UnfinishedTask = 0x7,
	EventNotFound = 0x8,
	DecryptFailure = 0x9
};