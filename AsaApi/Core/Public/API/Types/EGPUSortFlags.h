#pragma once


enum class EGPUSortFlags:unsigned int
{
	None = 0x0,
	LowPrecisionKeys = 0x1,
	HighPrecisionKeys = 0x2,
	AnyKeyPrecision = 0x3,
	KeyGenAfterPreRender = 0x4,
	KeyGenAfterPostRenderOpaque = 0x8,
	AnyKeyGenLocation = 0xC,
	SortAfterPreRender = 0x10,
	SortAfterPostRenderOpaque = 0x20,
	AnySortLocation = 0x30,
	ValuesAsG16R16F = 0x40,
	ValuesAsInt32 = 0x80,
	AnyValueFormat = 0xC0
};