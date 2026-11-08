#pragma once


enum class ECustomTimeStepSynchronizationState:int
{
	Closed = 0x0,
	Error = 0x1,
	Synchronized = 0x2,
	Synchronizing = 0x3
};