#pragma once


enum class ESlateVisibility:unsigned char
{
	Visible = 0x0,
	Collapsed = 0x1,
	Hidden = 0x2,
	HitTestInvisible = 0x3,
	SelfHitTestInvisible = 0x4
};