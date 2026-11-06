#pragma once


enum class ETimedDataInputState:unsigned char
{
	Connected = 0x0,
	Unresponsive = 0x1,
	Disconnected = 0x2
};