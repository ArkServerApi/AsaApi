#pragma once


enum class EReplayHeaderFlags:unsigned int
{
	None = 0x0,
	ClientRecorded = 0x1,
	HasStreamingFixes = 0x2,
	DeltaCheckpoints = 0x4,
	GameSpecificFrameData = 0x8,
	ReplayConnection = 0x10,
	ActorPrioritizationEnabled = 0x20,
	NetRelevancyEnabled = 0x40,
	AsyncRecorded = 0x80
};