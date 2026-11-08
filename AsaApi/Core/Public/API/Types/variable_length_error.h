#pragma once


enum class variable_length_error:int
{
	loop_error = 0xFE,
	initial_error = 0xFF,
	lz4ok = 0x0
};