#pragma once


enum class ERDGPassFlags:unsigned short
{
	None = 0x0,
	Raster = 0x1,
	Compute = 0x2,
	AsyncCompute = 0x4,
	Copy = 0x8,
	NeverCull = 0x10,
	SkipRenderPass = 0x20,
	NeverMerge = 0x40,
	NeverParallel = 0x80,
	ParallelTranslate = 0x100,
	Readback = 0x18
};