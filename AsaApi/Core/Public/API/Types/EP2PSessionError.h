#pragma once


enum class EP2PSessionError:int
{
	k_EP2PSessionErrorNone = 0x0,
	k_EP2PSessionErrorNoRightsToApp = 0x2,
	k_EP2PSessionErrorTimeout = 0x4,
	k_EP2PSessionErrorNotRunningApp_DELETED = 0x1,
	k_EP2PSessionErrorDestinationNotLoggedIn_DELETED = 0x3,
	k_EP2PSessionErrorMax = 0x5
};