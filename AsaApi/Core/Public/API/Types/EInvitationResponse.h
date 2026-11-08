#pragma once


enum class EInvitationResponse:unsigned char
{
	UnknownFailure = 0x0,
	BadBuild = 0x1,
	Rejected = 0x2,
	Accepted = 0x3
};