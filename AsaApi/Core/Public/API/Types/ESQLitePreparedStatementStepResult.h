#pragma once


enum class ESQLitePreparedStatementStepResult:unsigned char
{
	Error = 0x0,
	Busy = 0x1,
	Row = 0x2,
	Done = 0x3
};