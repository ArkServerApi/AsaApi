#pragma once


enum class FSteamConnectionMethod:signed char
{
	None = 0x0,
	Direct = 0x1,
	P2P = 0x2,
	PartnerHosted = 0x3
};