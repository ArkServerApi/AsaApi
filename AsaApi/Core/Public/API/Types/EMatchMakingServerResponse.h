#pragma once


enum class EMatchMakingServerResponse:int
{
	eServerResponded = 0x0,
	eServerFailedToRespond = 0x1,
	eNoServersListedOnMasterServer = 0x2
};