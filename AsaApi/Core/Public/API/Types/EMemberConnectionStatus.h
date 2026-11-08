#pragma once


enum class EMemberConnectionStatus:unsigned char
{
	Uninitialized = 0x0,
	Disconnected = 0x1,
	Initializing = 0x2,
	Connected = 0x3
};