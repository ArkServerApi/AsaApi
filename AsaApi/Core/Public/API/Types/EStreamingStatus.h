#pragma once


enum class EStreamingStatus:int
{
	LEVEL_Unloaded = 0x0,
	LEVEL_UnloadedButStillAround = 0x1,
	LEVEL_Loading = 0x2,
	LEVEL_Loaded = 0x3,
	LEVEL_MakingVisible = 0x4,
	LEVEL_Visible = 0x5,
	LEVEL_Preloading = 0x6,
	LEVEL_FailedToLoad = 0x7,
	LEVEL_MakingInvisible = 0x8,
	LEVEL_StreamingStatusCount = 0x9
};