#pragma once


enum class ELeaderboardDataRequest:int
{
	k_ELeaderboardDataRequestGlobal = 0x0,
	k_ELeaderboardDataRequestGlobalAroundUser = 0x1,
	k_ELeaderboardDataRequestFriends = 0x2,
	k_ELeaderboardDataRequestUsers = 0x3
};