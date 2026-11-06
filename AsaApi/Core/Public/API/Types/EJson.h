#pragma once


enum class EJson:int
{
	None = 0x0,
	Null = 0x1,
	String = 0x2,
	Number = 0x3,
	Boolean = 0x4,
	Array = 0x5,
	Object = 0x6
};