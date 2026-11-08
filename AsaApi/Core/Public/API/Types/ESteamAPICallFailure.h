#pragma once


enum class ESteamAPICallFailure:int
{
	k_ESteamAPICallFailureNone = 0xFF,
	k_ESteamAPICallFailureSteamGone = 0x0,
	k_ESteamAPICallFailureNetworkFailure = 0x1,
	k_ESteamAPICallFailureInvalidHandle = 0x2,
	k_ESteamAPICallFailureMismatchedCallback = 0x3
};