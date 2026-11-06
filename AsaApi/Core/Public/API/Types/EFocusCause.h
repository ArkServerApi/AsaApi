#pragma once


enum class EFocusCause:unsigned char
{
	Mouse = 0x0,
	Navigation = 0x1,
	SetDirectly = 0x2,
	Cleared = 0x3,
	OtherWidgetLostFocus = 0x4,
	WindowActivate = 0x5
};