#pragma once


namespace EInAppPurchaseState
{
	enum Type:int
	{
		Unknown = 0x0,
		Success = 0x1,
		Failed = 0x2,
		Cancelled = 0x3,
		Invalid = 0x4,
		NotAllowed = 0x5,
		Restored = 0x6,
		AlreadyOwned = 0x7
	};
}