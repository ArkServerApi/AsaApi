#pragma once


namespace EPinHidingMode
{
	enum Type:int
	{
		NeverAsPin = 0x0,
		PinHiddenByDefault = 0x1,
		PinShownByDefault = 0x2,
		AlwaysAsPin = 0x3
	};
}