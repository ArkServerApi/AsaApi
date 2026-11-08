#pragma once


enum class EUserUGCList:int
{
	k_EUserUGCList_Published = 0x0,
	k_EUserUGCList_VotedOn = 0x1,
	k_EUserUGCList_VotedUp = 0x2,
	k_EUserUGCList_VotedDown = 0x3,
	k_EUserUGCList_WillVoteLater = 0x4,
	k_EUserUGCList_Favorited = 0x5,
	k_EUserUGCList_Subscribed = 0x6,
	k_EUserUGCList_UsedOrPlayed = 0x7,
	k_EUserUGCList_Followed = 0x8
};