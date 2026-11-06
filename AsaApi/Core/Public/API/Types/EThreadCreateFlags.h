#pragma once


enum class EThreadCreateFlags:signed char
{
	None = 0x0,
	SMTExclusive = 0x1
};