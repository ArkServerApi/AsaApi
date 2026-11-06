#pragma once


enum class WICDecodeOptions:int
{
	WICDecodeMetadataCacheOnDemand = 0x0,
	WICDecodeMetadataCacheOnLoad = 0x1,
	WICMETADATACACHEOPTION_FORCE_DWORD = 0x7FFFFFFF
};