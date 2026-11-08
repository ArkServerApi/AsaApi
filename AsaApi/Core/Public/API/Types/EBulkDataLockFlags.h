#pragma once


enum class EBulkDataLockFlags:int
{
	LOCK_READ_ONLY = 0x1,
	LOCK_READ_WRITE = 0x2
};