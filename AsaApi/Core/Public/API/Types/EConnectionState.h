#pragma once


enum class EConnectionState:int
{
	USOCK_Invalid = 0x0,
	USOCK_Closed = 0x1,
	USOCK_Pending = 0x2,
	USOCK_Open = 0x3
};