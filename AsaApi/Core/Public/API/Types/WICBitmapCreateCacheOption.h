#pragma once


enum class WICBitmapCreateCacheOption:int
{
	WICBitmapNoCache = 0x0,
	WICBitmapCacheOnDemand = 0x1,
	WICBitmapCacheOnLoad = 0x2,
	WICBITMAPCREATECACHEOPTION_FORCE_DWORD = 0x7FFFFFFF
};