#pragma once


enum class ELobbyType:int
{
	k_ELobbyTypePrivate = 0x0,
	k_ELobbyTypeFriendsOnly = 0x1,
	k_ELobbyTypePublic = 0x2,
	k_ELobbyTypeInvisible = 0x3,
	k_ELobbyTypePrivateUnique = 0x4
};