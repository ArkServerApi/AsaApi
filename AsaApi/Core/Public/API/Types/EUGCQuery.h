#pragma once


enum class EUGCQuery:int
{
	k_EUGCQuery_RankedByVote = 0x0,
	k_EUGCQuery_RankedByPublicationDate = 0x1,
	k_EUGCQuery_AcceptedForGameRankedByAcceptanceDate = 0x2,
	k_EUGCQuery_RankedByTrend = 0x3,
	k_EUGCQuery_FavoritedByFriendsRankedByPublicationDate = 0x4,
	k_EUGCQuery_CreatedByFriendsRankedByPublicationDate = 0x5,
	k_EUGCQuery_RankedByNumTimesReported = 0x6,
	k_EUGCQuery_CreatedByFollowedUsersRankedByPublicationDate = 0x7,
	k_EUGCQuery_NotYetRated = 0x8,
	k_EUGCQuery_RankedByTotalVotesAsc = 0x9,
	k_EUGCQuery_RankedByVotesUp = 0xA,
	k_EUGCQuery_RankedByTextSearch = 0xB,
	k_EUGCQuery_RankedByTotalUniqueSubscriptions = 0xC,
	k_EUGCQuery_RankedByPlaytimeTrend = 0xD,
	k_EUGCQuery_RankedByTotalPlaytime = 0xE,
	k_EUGCQuery_RankedByAveragePlaytimeTrend = 0xF,
	k_EUGCQuery_RankedByLifetimeAveragePlaytime = 0x10,
	k_EUGCQuery_RankedByPlaytimeSessionsTrend = 0x11,
	k_EUGCQuery_RankedByLifetimePlaytimeSessions = 0x12,
	k_EUGCQuery_RankedByLastUpdatedDate = 0x13
};