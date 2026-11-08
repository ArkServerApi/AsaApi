#pragma once


namespace EVoiceCaptureState
{
	enum Type:int
	{
		UnInitialized = 0x0,
		NotCapturing = 0x1,
		Ok = 0x2,
		NoData = 0x3,
		Stopping = 0x4,
		BufferTooSmall = 0x5,
		Error = 0x6
	};
}