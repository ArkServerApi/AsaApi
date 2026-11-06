#pragma once


enum class ovrRoomJoinability_:int
{
	ovrRoom_JoinabilityUnknown = 0x0,
	ovrRoom_JoinabilityAreIn = 0x1,
	ovrRoom_JoinabilityAreKicked = 0x2,
	ovrRoom_JoinabilityCanJoin = 0x3,
	ovrRoom_JoinabilityIsFull = 0x4,
	ovrRoom_JoinabilityNoViewer = 0x5,
	ovrRoom_JoinabilityPolicyPrevents = 0x6
};