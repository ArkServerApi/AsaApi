#pragma once


enum class ECrashContextType:int
{
	Crash = 0x0,
	Assert = 0x1,
	Ensure = 0x2,
	Stall = 0x3,
	GPUCrash = 0x4,
	Hang = 0x5,
	OutOfMemory = 0x6,
	AbnormalShutdown = 0x7,
	Max = 0x8
};