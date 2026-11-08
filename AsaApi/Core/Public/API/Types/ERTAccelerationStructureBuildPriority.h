#pragma once


enum class ERTAccelerationStructureBuildPriority:int
{
	Immediate = 0x0,
	High = 0x1,
	Normal = 0x2,
	Low = 0x3,
	Skip = 0x4
};