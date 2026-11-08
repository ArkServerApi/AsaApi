#pragma once


enum class EOS_EAuthScopeFlags:int
{
	EOS_AS_NoFlags = 0x0,
	EOS_AS_BasicProfile = 0x1,
	EOS_AS_FriendsList = 0x2,
	EOS_AS_Presence = 0x4,
	EOS_AS_FriendsManagement = 0x8,
	EOS_AS_Email = 0x10,
	EOS_AS_Country = 0x20
};