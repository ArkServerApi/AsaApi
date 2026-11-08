#pragma once


enum class EPersonaState:int
{
	k_EPersonaStateOffline = 0x0,
	k_EPersonaStateOnline = 0x1,
	k_EPersonaStateBusy = 0x2,
	k_EPersonaStateAway = 0x3,
	k_EPersonaStateSnooze = 0x4,
	k_EPersonaStateLookingToTrade = 0x5,
	k_EPersonaStateLookingToPlay = 0x6,
	k_EPersonaStateInvisible = 0x7,
	k_EPersonaStateMax = 0x8
};