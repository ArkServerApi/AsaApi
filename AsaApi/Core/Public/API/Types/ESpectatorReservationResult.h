#pragma once


namespace ESpectatorReservationResult
{
	enum Type:int
	{
		NoResult = 0x0,
		RequestPending = 0x1,
		GeneralError = 0x2,
		SpectatorLimitReached = 0x3,
		IncorrectPlayerCount = 0x4,
		RequestTimedOut = 0x5,
		ReservationDuplicate = 0x6,
		ReservationNotFound = 0x7,
		ReservationAccepted = 0x8,
		ReservationDenied = 0x9,
		ReservationDenied_CrossPlayRestriction = 0xA,
		ReservationDenied_Banned = 0xB,
		ReservationRequestCanceled = 0xC,
		ReservationInvalid = 0xD,
		BadSessionId = 0xE,
		ReservationDenied_ContainsExistingPlayers = 0xF
	};
}