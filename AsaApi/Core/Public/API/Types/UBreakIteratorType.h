#pragma once


enum class UBreakIteratorType:int
{
	UBRK_CHARACTER = 0x0,
	UBRK_WORD = 0x1,
	UBRK_LINE = 0x2,
	UBRK_SENTENCE = 0x3,
	UBRK_TITLE = 0x4,
	UBRK_COUNT = 0x5
};