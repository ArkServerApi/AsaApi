#pragma once


enum class EOnSessionParticipantLeftReason:unsigned char
{
	Left = 0x0,
	Disconnected = 0x1,
	Kicked = 0x2,
	Closed = 0x3
};