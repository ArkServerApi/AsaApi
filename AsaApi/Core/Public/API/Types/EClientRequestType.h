#pragma once


enum class EClientRequestType:unsigned char
{
	NonePending = 0x0,
	ExistingSessionReservation = 0x1,
	ReservationUpdate = 0x2,
	EmptyServerReservation = 0x3,
	Reconnect = 0x4,
	Abandon = 0x5,
	ReservationRemoveMembers = 0x6,
	AddOrUpdateReservation = 0x7
};