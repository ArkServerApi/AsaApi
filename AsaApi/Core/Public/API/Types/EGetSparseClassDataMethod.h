#pragma once


enum class EGetSparseClassDataMethod:unsigned char
{
	CreateIfNull = 0x0,
	ArchetypeIfNull = 0x1,
	ReturnIfNull = 0x2
};