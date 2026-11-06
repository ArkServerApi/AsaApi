#pragma once


enum class EPartyInvitationRemovedReason:unsigned char
{
	Unknown = 0x0,
	Accepted = 0x1,
	Declined = 0x2,
	Cleared = 0x3,
	Expired = 0x4,
	Invalidated = 0x5
};