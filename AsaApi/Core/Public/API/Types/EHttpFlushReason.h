#pragma once


enum class EHttpFlushReason:unsigned char
{
	Default = 0x0,
	Background = 0x1,
	Shutdown = 0x2,
	FullFlush = 0x3,
	Count = 0x4
};