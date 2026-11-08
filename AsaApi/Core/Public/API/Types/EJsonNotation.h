#pragma once


enum class EJsonNotation:int
{
	ObjectStart = 0x0,
	ObjectEnd = 0x1,
	ArrayStart = 0x2,
	ArrayEnd = 0x3,
	Boolean = 0x4,
	String = 0x5,
	Number = 0x6,
	Null = 0x7,
	Error = 0x8
};