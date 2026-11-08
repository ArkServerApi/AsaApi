#pragma once


enum class ESQLitePreparedStatementExecuteRowResult:unsigned char
{
	Continue = 0x0,
	Stop = 0x1,
	Error = 0x2
};