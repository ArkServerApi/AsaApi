#pragma once


enum class EPCGAttributeAccessorFlags:int
{
	StrictType = 0x1,
	AllowBroadcast = 0x2,
	AllowConstructible = 0x4,
	AllowSetDefaultValue = 0x8
};