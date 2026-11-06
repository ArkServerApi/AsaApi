#pragma once


enum class EStreamableManagerCombinedHandleOptions:unsigned char
{
	None = 0x0,
	MergeDebugNames = 0x1,
	RedirectParents = 0x2,
	SkipNulls = 0x4
};