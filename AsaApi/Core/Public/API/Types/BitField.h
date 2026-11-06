#pragma once

struct BitField
{
	DWORD64 offset;
	DWORD bit_position;
	ULONGLONG num_bits;
	ULONGLONG length; //in bytes
};