#pragma once


enum class ESteamAuthResponseCode:unsigned char
{
	OK = 0x0,
	NotConnectedToSteam = 0x1,
	NoOwnership = 0x2,
	VACBanned = 0x3,
	LoggedInElsewhere = 0x4,
	VACCheckTimeout = 0x5,
	TicketCancelled = 0x6,
	TicketAlreadyUsed = 0x7,
	TicketInvalid = 0x8,
	PublisherBanned = 0x9,
	FailedToCreateUser = 0x14,
	Count = 0x15
};