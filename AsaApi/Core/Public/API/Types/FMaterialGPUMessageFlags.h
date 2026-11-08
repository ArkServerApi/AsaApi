#pragma once


enum class FMaterialGPUMessageFlags:unsigned int
{
	None = 0x0,
	PrimitiveId = 0x1000000,
	InstanceId = 0x2000000,
	RowIdx = 0x4000000
};