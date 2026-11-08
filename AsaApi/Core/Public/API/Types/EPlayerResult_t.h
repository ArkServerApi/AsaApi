#pragma once


enum class EPlayerResult_t:int
{
	k_EPlayerResultFailedToConnect = 0x1,
	k_EPlayerResultAbandoned = 0x2,
	k_EPlayerResultKicked = 0x3,
	k_EPlayerResultIncomplete = 0x4,
	k_EPlayerResultCompleted = 0x5
};