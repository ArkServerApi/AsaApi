#pragma once


enum class CompressTaskState:unsigned int
{
	BusyCompressing = 0x0,
	WaitForAsyncGetSavedFiles = 0x1,
	WaitForAsyncDeletesToFinish = 0x2,
	SaveDataFiles = 0x3
};