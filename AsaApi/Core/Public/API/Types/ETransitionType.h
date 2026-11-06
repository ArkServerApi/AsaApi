#pragma once


enum class ETransitionType:unsigned char
{
	None = 0x0,
	Paused = 0x1,
	Loading = 0x2,
	Saving = 0x3,
	Connecting = 0x4,
	Precaching = 0x5,
	WaitingToConnect = 0x6,
	MAX = 0x7
};