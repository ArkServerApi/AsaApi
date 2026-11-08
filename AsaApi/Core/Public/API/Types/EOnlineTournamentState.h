#pragma once


enum class EOnlineTournamentState:unsigned char
{
	Created = 0x0,
	OpenRegistration = 0x1,
	ClosedRegistration = 0x2,
	InProgress = 0x3,
	Finished = 0x4,
	Cancelled = 0x5
};