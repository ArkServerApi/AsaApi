#pragma once


enum class ovrRoomJoinPolicy_:int
{
	ovrRoom_JoinPolicyNone = 0x0,
	ovrRoom_JoinPolicyEveryone = 0x1,
	ovrRoom_JoinPolicyFriendsOfMembers = 0x2,
	ovrRoom_JoinPolicyFriendsOfOwner = 0x3,
	ovrRoom_JoinPolicyInvitedUsers = 0x4,
	ovrRoom_JoinPolicyUnknown = 0x5
};