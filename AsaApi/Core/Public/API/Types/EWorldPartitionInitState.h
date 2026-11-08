#pragma once


enum class EWorldPartitionInitState:int
{
	Uninitialized = 0x0,
	Initializing = 0x1,
	Initialized = 0x2,
	Uninitializing = 0x3
};