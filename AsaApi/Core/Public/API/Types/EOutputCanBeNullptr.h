#pragma once


enum class EOutputCanBeNullptr:int
{
	Never = 0x0,
	IfNoTabValid = 0x1,
	IfNoOpenTabValid = 0x2
};