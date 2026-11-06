#pragma once


enum class BANNER_NOTIFICATION_EVENT:int
{
	BNE_Rendered = 0x0,
	BNE_Hovered = 0x1,
	BNE_Closed = 0x2,
	BNE_Dismissed = 0x3,
	BNE_Button1Clicked = 0x4,
	BNE_Button2Clicked = 0x5
};