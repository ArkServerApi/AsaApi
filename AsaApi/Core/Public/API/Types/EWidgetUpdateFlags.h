#pragma once


enum class EWidgetUpdateFlags:unsigned char
{
	None = 0x0,
	NeedsTick = 0x4,
	NeedsActiveTimerUpdate = 0x8,
	NeedsRepaint = 0x10,
	NeedsVolatilePaint = 0x40,
	NeedsVolatilePrepass = 0x80,
	AnyUpdate = 0xFF
};