#pragma once


enum class EHierarchicalSimplificationMethod:unsigned char
{
	None = 0x0,
	Merge = 0x1,
	Simplify = 0x2,
	Approximate = 0x3
};