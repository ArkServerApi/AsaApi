#pragma once


enum class EPawnActionTaskResult:unsigned char
{
	Unknown = 0x0,
	TaskFinished = 0x1,
	TaskAborted = 0x2,
	ActionLost = 0x3
};