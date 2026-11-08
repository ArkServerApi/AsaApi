#pragma once


enum class ESlateDebuggingNavigationMethod:unsigned char
{
	Unknown = 0x0,
	Explicit = 0x1,
	CustomDelegateBound = 0x2,
	CustomDelegateUnbound = 0x3,
	NextOrPrevious = 0x4,
	HitTestGrid = 0x5
};