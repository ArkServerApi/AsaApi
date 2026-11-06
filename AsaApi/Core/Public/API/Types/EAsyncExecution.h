#pragma once


enum class EAsyncExecution:int
{
	TaskGraph = 0x0,
	TaskGraphMainThread = 0x1,
	Thread = 0x2,
	ThreadIfForkSafe = 0x3,
	ThreadPool = 0x4
};