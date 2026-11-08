#pragma once


enum class EQuartzCommandType:unsigned char
{
	PlaySound = 0x0,
	QueueSoundToPlay = 0x1,
	RetriggerSound = 0x2,
	TickRateChange = 0x3,
	TransportReset = 0x4,
	StartOtherClock = 0x5,
	Custom = 0x6
};