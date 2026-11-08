#pragma once


enum class WICBitmapEncoderCacheOption:int
{
	WICBitmapEncoderCacheInMemory = 0x0,
	WICBitmapEncoderCacheTempFile = 0x1,
	WICBitmapEncoderNoCache = 0x2,
	WICBITMAPENCODERCACHEOPTION_FORCE_DWORD = 0x7FFFFFFF
};