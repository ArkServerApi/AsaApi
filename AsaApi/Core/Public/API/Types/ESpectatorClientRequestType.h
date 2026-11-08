#pragma once


enum class ESpectatorClientRequestType:unsigned char
{
	NonePending = 0x0,
	ExistingSessionReservation = 0x1,
	ReservationUpdate = 0x2,
	EmptyServerReservation = 0x3,
	Reconnect = 0x4,
	Abandon = 0x5
};