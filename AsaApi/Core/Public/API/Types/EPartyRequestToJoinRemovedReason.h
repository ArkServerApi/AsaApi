#pragma once


enum class EPartyRequestToJoinRemovedReason:unsigned char
{
	Unknown = 0x0,
	Cancelled = 0x1,
	Expired = 0x2,
	Dismissed = 0x3,
	Accepted = 0x4
};