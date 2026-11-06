#pragma once


enum class ETargetDeviceThreadWaitStates:int
{
	Unknown = 0x0,
	Locked = 0x1,
	Sleeping = 0x2,
	Suspended = 0x3,
	Swapped = 0x4,
	Waiting = 0x5
};