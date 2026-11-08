#pragma once


enum class EStatType:int
{
	STATTYPE_CycleCounter = 0x0,
	STATTYPE_AccumulatorFLOAT = 0x1,
	STATTYPE_AccumulatorDWORD = 0x2,
	STATTYPE_CounterFLOAT = 0x3,
	STATTYPE_CounterDWORD = 0x4,
	STATTYPE_MemoryCounter = 0x5,
	STATTYPE_Error = 0x6
};