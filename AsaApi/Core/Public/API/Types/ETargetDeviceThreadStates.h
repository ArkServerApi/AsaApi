#pragma once


enum class ETargetDeviceThreadStates:int
{
	Unknown = 0x0,
	CanRun = 0x1,
	Inactive = 0x2,
	Inhibited = 0x3,
	RunQueue = 0x4,
	Running = 0x5
};