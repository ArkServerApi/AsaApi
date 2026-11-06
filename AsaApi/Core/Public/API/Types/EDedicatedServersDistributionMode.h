#pragma once


enum class EDedicatedServersDistributionMode:unsigned char
{
	DevelopersOnly = 0x0,
	DevelopersAndPlayers = 0x1,
	PlayersOnly = 0x2
};