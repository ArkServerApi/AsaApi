#pragma once


enum class EAsyncTaskNotificationState:unsigned char
{
	None = 0x0,
	Pending = 0x1,
	Success = 0x2,
	Failure = 0x3,
	Prompt = 0x4
};