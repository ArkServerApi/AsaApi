#pragma once


namespace EChunkLocation
{
	enum Type:int
	{
		DoesNotExist = 0x0,
		NotAvailable = 0x1,
		LocalSlow = 0x2,
		LocalFast = 0x3,
		BestLocation = 0x3
	};
}