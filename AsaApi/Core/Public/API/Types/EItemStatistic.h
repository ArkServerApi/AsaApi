#pragma once


enum class EItemStatistic:int
{
	k_EItemStatistic_NumSubscriptions = 0x0,
	k_EItemStatistic_NumFavorites = 0x1,
	k_EItemStatistic_NumFollowers = 0x2,
	k_EItemStatistic_NumUniqueSubscriptions = 0x3,
	k_EItemStatistic_NumUniqueFavorites = 0x4,
	k_EItemStatistic_NumUniqueFollowers = 0x5,
	k_EItemStatistic_NumUniqueWebsiteViews = 0x6,
	k_EItemStatistic_ReportScore = 0x7,
	k_EItemStatistic_NumSecondsPlayed = 0x8,
	k_EItemStatistic_NumPlaytimeSessions = 0x9,
	k_EItemStatistic_NumComments = 0xA,
	k_EItemStatistic_NumSecondsPlayedDuringTimePeriod = 0xB,
	k_EItemStatistic_NumPlaytimeSessionsDuringTimePeriod = 0xC
};