#pragma once


enum class EPSOPrecacheStateMask:unsigned char
{
	None = 0x0,
	Compiling = 0x1,
	Succeeded = 0x2,
	Failed = 0x4,
	Boosted = 0x8
};