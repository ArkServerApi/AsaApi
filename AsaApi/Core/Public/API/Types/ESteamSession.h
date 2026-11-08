#pragma once


namespace ESteamSession
{
	enum Type:int
	{
		None = 0x0,
		LobbySession = 0x1,
		AdvertisedSessionHost = 0x2,
		AdvertisedSessionClient = 0x3,
		LANSession = 0x4
	};
}