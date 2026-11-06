#pragma once


enum class ESlateAccessibleBehavior:unsigned char
{
	NotAccessible = 0x0,
	Auto = 0x1,
	Summary = 0x2,
	Custom = 0x3,
	ToolTip = 0x4
};