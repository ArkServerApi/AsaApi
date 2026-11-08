#pragma once


enum class EAsyncTaskState:int
{
	Cancelled = 0x0,
	Completed = 0x1,
	Failed = 0x2,
	Pending = 0x3,
	Running = 0x4
};