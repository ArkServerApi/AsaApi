#pragma once


enum class EInAppPurchaseStatus:unsigned char
{
	Invalid = 0x0,
	Failed = 0x1,
	Deferred = 0x2,
	Canceled = 0x3,
	Purchased = 0x4,
	Restored = 0x5
};