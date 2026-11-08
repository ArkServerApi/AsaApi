#pragma once


enum class EBeginAuthSessionResult:int
{
	k_EBeginAuthSessionResultOK = 0x0,
	k_EBeginAuthSessionResultInvalidTicket = 0x1,
	k_EBeginAuthSessionResultDuplicateRequest = 0x2,
	k_EBeginAuthSessionResultInvalidVersion = 0x3,
	k_EBeginAuthSessionResultGameMismatch = 0x4,
	k_EBeginAuthSessionResultExpiredTicket = 0x5
};