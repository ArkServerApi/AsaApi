#pragma once


enum class EPathFollowingReachMode:unsigned char
{
	ExactLocation = 0x0,
	OverlapAgent = 0x1,
	OverlapGoal = 0x2,
	OverlapAgentAndGoal = 0x3
};