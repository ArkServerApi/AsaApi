#pragma once


enum class EObjectDataResourceFlags:unsigned int
{
	None = 0x0,
	Inline = 0x1,
	Streaming = 0x2,
	Optional = 0x4,
	Duplicate = 0x8,
	MemoryMapped = 0x10,
	DerivedDataReference = 0x20
};