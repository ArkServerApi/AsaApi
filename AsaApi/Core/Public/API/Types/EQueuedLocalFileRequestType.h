#pragma once


namespace EQueuedLocalFileRequestType
{
	enum Type:int
	{
		StartRecording = 0x0,
		WriteHeader = 0x1,
		WritingHeader = 0x2,
		WritingStream = 0x3,
		StopRecording = 0x4,
		StartPlayback = 0x5,
		ReadingHeader = 0x6,
		ReadingStream = 0x7,
		EnumeratingStreams = 0x8,
		WritingCheckpoint = 0x9,
		ReadingCheckpoint = 0xA,
		UpdatingEvent = 0xB,
		EnumeratingEvents = 0xC,
		RequestingEvent = 0xD,
		StopStreaming = 0xE,
		DeletingFinishedStream = 0xF,
		RefreshingLiveStream = 0x10,
		KeepReplay = 0x11,
		RenameReplay = 0x12,
		RenameReplayFriendlyName = 0x13
	};
}