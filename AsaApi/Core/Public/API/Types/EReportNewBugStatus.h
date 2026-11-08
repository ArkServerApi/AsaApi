#pragma once


enum class EReportNewBugStatus:unsigned char
{
	NotReporting = 0x0,
	TakingScreenShot = 0x1,
	WritingVideoReplayBufferToDisk = 0x2,
	Uploading = 0x3,
	Done = 0x4,
	Failed = 0x5
};