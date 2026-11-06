#pragma once


enum class UCharIteratorOrigin:int
{
	UITER_START = 0x0,
	UITER_CURRENT = 0x1,
	UITER_LIMIT = 0x2,
	UITER_ZERO = 0x3,
	UITER_LENGTH = 0x4
};