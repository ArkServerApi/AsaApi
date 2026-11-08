#pragma once


enum class EUdpMessageSegments:unsigned char
{
	None = 0x0,
	Abort = 0x1,
	Acknowledge = 0x2,
	Bye = 0x3,
	Data = 0x4,
	Hello = 0x5,
	Retransmit = 0x6,
	Timeout = 0x7,
	AcknowledgeSegments = 0x8,
	Ping = 0x9,
	Pong = 0xA
};