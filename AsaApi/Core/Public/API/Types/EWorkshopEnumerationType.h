#pragma once


enum class EWorkshopEnumerationType:int
{
	k_EWorkshopEnumerationTypeRankedByVote = 0x0,
	k_EWorkshopEnumerationTypeRecent = 0x1,
	k_EWorkshopEnumerationTypeTrending = 0x2,
	k_EWorkshopEnumerationTypeFavoritesOfFriends = 0x3,
	k_EWorkshopEnumerationTypeVotedByFriends = 0x4,
	k_EWorkshopEnumerationTypeContentByFriends = 0x5,
	k_EWorkshopEnumerationTypeRecentFromFollowedUsers = 0x6
};