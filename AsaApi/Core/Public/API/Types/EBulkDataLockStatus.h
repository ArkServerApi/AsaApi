#pragma once


enum class EBulkDataLockStatus:int
{
	LOCKSTATUS_Unlocked = 0x0,
	LOCKSTATUS_ReadOnlyLock = 0x1,
	LOCKSTATUS_ReadWriteLock = 0x2
};