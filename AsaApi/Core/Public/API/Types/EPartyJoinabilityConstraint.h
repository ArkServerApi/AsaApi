#pragma once


enum class EPartyJoinabilityConstraint:unsigned char
{
	AllowPlayersInMultipleParties = 0x0,
	IgnoreInvitesIfAlreadyInParty = 0x1
};