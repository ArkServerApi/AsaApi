#pragma once


namespace EQueuedHttpRequestType
{
	enum Type:int
	{
		StartUploading = 0x0,
		UploadingHeader = 0x1,
		UploadingStream = 0x2,
		StopUploading = 0x3,
		StartDownloading = 0x4,
		DownloadingHeader = 0x5,
		DownloadingStream = 0x6,
		RefreshingViewer = 0x7,
		EnumeratingSessions = 0x8,
		EnumeratingCheckpoints = 0x9,
		UploadingCheckpoint = 0xA,
		DownloadingCheckpoint = 0xB,
		AddingUser = 0xC,
		UploadingCustomEvent = 0xD,
		EnumeratingCustomEvent = 0xE,
		RequestEventData = 0xF,
		UploadHeader = 0x10,
		StopStreaming = 0x11,
		KeepReplay = 0x12
	};
}