#pragma once


enum class ESQLiteDatabaseOpenMode:unsigned char
{
	ReadOnly = 0x0,
	ReadWrite = 0x1,
	ReadWriteCreate = 0x2
};