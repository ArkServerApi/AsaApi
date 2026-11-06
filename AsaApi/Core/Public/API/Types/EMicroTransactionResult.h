#pragma once


enum class EMicroTransactionResult:int
{
	MTR_Succeeded = 0x0,
	MTR_Failed = 0x1,
	MTR_Canceled = 0x2,
	MTR_RestoredFromServer = 0x3,
	MTR_MAX = 0x4
};