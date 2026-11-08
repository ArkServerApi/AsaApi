#pragma once


enum class EToolActivityEndResult:int
{
	Completed = 0x0,
	Cancelled = 0x1,
	ErrorDuringEnd = 0x2
};