#pragma once


enum class EAuthSessionResponse:int
{
	k_EAuthSessionResponseOK = 0x0,
	k_EAuthSessionResponseUserNotConnectedToSteam = 0x1,
	k_EAuthSessionResponseNoLicenseOrExpired = 0x2,
	k_EAuthSessionResponseVACBanned = 0x3,
	k_EAuthSessionResponseLoggedInElseWhere = 0x4,
	k_EAuthSessionResponseVACCheckTimedOut = 0x5,
	k_EAuthSessionResponseAuthTicketCanceled = 0x6,
	k_EAuthSessionResponseAuthTicketInvalidAlreadyUsed = 0x7,
	k_EAuthSessionResponseAuthTicketInvalid = 0x8,
	k_EAuthSessionResponsePublisherIssuedBan = 0x9
};