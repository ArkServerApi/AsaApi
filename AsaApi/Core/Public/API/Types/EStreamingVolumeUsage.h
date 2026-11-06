#pragma once


enum class EStreamingVolumeUsage:int
{
	SVB_Loading = 0x0,
	SVB_LoadingAndVisibility = 0x1,
	SVB_VisibilityBlockingOnLoad = 0x2,
	SVB_BlockingOnLoad = 0x3,
	SVB_LoadingNotVisible = 0x4,
	SVB_MAX = 0x5
};