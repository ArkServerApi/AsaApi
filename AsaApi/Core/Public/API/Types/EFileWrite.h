#pragma once


enum class EFileWrite:int
{
	FILEWRITE_None = 0x0,
	FILEWRITE_NoFail = 0x1,
	FILEWRITE_NoReplaceExisting = 0x2,
	FILEWRITE_EvenIfReadOnly = 0x4,
	FILEWRITE_Append = 0x8,
	FILEWRITE_AllowRead = 0x10,
	FILEWRITE_Silent = 0x20
};