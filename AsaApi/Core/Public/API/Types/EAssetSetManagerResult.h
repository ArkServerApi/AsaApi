#pragma once


namespace EAssetSetManagerResult
{
	enum Type:int
	{
		DoNotSet = 0x0,
		SetButDoNotRecurse = 0x1,
		SetAndRecurse = 0x2
	};
}