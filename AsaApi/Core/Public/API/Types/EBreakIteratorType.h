#pragma once


enum class EBreakIteratorType:int
{
	Grapheme = 0x0,
	Word = 0x1,
	Line = 0x2,
	Sentence = 0x3,
	Title = 0x4
};