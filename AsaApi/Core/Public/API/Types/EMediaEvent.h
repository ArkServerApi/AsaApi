#pragma once


enum class EMediaEvent:int
{
	MediaBuffering = 0x0,
	MediaClosed = 0x1,
	MediaConnecting = 0x2,
	MediaOpened = 0x3,
	MediaOpenFailed = 0x4,
	PlaybackEndReached = 0x5,
	PlaybackResumed = 0x6,
	PlaybackSuspended = 0x7,
	SeekCompleted = 0x8,
	TracksChanged = 0x9,
	MetadataChanged = 0xA,
	Internal_Start = 0xB,
	Internal_PurgeVideoSamplesHint = 0xB,
	Internal_ResetForDiscontinuity = 0xC,
	Internal_RenderClockStart = 0xD,
	Internal_RenderClockStop = 0xE,
	Internal_VideoSamplesAvailable = 0xF,
	Internal_VideoSamplesUnavailable = 0x10,
	Internal_AudioSamplesAvailable = 0x11,
	Internal_AudioSamplesUnavailable = 0x12
};