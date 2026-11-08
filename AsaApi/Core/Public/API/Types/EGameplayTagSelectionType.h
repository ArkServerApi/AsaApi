#pragma once


enum class EGameplayTagSelectionType:unsigned char
{
	None = 0x0,
	NonRestrictedOnly = 0x1,
	RestrictedOnly = 0x2,
	All = 0x3
};