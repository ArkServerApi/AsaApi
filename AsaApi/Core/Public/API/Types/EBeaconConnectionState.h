#pragma once


enum class EBeaconConnectionState:unsigned char
{
	Invalid = 0x0,
	Closed = 0x1,
	Pending = 0x2,
	Open = 0x3
};