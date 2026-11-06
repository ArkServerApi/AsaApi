#pragma once


enum class ESteamEncryptedAppTicketState:int
{
	None = 0x0,
	TicketRequested = 0x1,
	TicketAvailable = 0x2,
	TicketFailure = 0x3
};