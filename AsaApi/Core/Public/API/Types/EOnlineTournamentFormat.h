#pragma once


enum class EOnlineTournamentFormat:unsigned char
{
	SingleElimination = 0x0,
	DoubleElimination = 0x1,
	Swiss = 0x2,
	RoundRobin = 0x3,
	Custom = 0x4
};