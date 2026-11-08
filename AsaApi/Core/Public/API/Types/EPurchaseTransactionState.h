#pragma once


enum class EPurchaseTransactionState:unsigned char
{
	NotStarted = 0x0,
	Processing = 0x1,
	Purchased = 0x2,
	Failed = 0x3,
	Deferred = 0x4,
	Canceled = 0x5,
	Restored = 0x6,
	NotAllowed = 0x7,
	Invalid = 0x8
};