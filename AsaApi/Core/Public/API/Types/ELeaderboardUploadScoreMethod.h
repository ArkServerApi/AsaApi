#pragma once


enum class ELeaderboardUploadScoreMethod:int
{
	k_ELeaderboardUploadScoreMethodNone = 0x0,
	k_ELeaderboardUploadScoreMethodKeepBest = 0x1,
	k_ELeaderboardUploadScoreMethodForceUpdate = 0x2
};