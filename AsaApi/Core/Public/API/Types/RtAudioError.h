#pragma once


namespace RtAudioError
{
	enum Type:int
	{
		WARNING = 0x0,
		DEBUG_WARNING = 0x1,
		UNSPECIFIED = 0x2,
		NO_DEVICES_FOUND = 0x3,
		INVALID_DEVICE = 0x4,
		MEMORY_ERROR = 0x5,
		INVALID_PARAMETER = 0x6,
		INVALID_USE = 0x7,
		DRIVER_ERROR = 0x8,
		SYSTEM_ERROR = 0x9,
		THREAD_ERROR = 0xA
	};
}