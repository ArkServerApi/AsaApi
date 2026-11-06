#pragma once


enum class EOnlineTournamentParticipantState:unsigned char
{
	Registered = 0x0,
	CheckedIn = 0x1,
	Present = 0x2,
	Absent = 0x3
};