#pragma once


enum class ESocketConnectionState:int
{
	SCS_NotConnected = 0x0,
	SCS_Connected = 0x1,
	SCS_ConnectionError = 0x2
};