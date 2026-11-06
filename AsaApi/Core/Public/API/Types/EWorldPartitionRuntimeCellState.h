#pragma once


enum class EWorldPartitionRuntimeCellState:unsigned char
{
	Unloaded = 0x0,
	Loaded = 0x1,
	Activated = 0x2
};