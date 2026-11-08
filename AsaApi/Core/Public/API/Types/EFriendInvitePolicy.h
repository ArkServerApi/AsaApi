#pragma once


enum class EFriendInvitePolicy:unsigned char
{
	Public = 0x0,
	Friends_of_Friends = 0x1,
	Private = 0x2,
	InvalidOrMax = 0x3
};