#pragma once


enum class ENetPingControlMessage:unsigned char
{
	SetPingAddress = 0x0,
	PingFailure = 0x1,
	Max = 0x1
};