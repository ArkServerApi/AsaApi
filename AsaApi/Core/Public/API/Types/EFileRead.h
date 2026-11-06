#pragma once


enum class EFileRead:int
{
	FILEREAD_None = 0x0,
	FILEREAD_NoFail = 0x1,
	FILEREAD_Silent = 0x2,
	FILEREAD_AllowWrite = 0x4
};