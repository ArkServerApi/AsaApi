#pragma once


enum class ESkinnedAssetAsyncPropertyLockType:int
{
	None = 0x0,
	ReadOnly = 0x1,
	WriteOnly = 0x2,
	ReadWrite = 0x3
};