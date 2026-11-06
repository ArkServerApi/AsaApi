#pragma once


enum class ESlateTickType:unsigned char
{
	Time = 0x1,
	PlatformAndInput = 0x2,
	Widgets = 0x4,
	TimeAndWidgets = 0x5,
	All = 0x7
};