#pragma once


enum class EPartyState:unsigned char
{
	None = 0x0,
	CreatePending = 0x1,
	JoinPending = 0x2,
	RejoinPending = 0x3,
	LeavePending = 0x4,
	Active = 0x5,
	Disconnected = 0x6,
	CleanUp = 0x7
};