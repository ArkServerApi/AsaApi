#pragma once


namespace EListSessionStatus
{
	enum Type:int
	{
		SearchingOfficial = 0x0,
		SearchingUnofficial = 0x1,
		SearchingListenServers = 0x2,
		SearchingFavorites = 0x3,
		SearchingHistory = 0x4,
		SearchingLAN = 0x5,
		SearchingFriends = 0x6,
		SearchingUnOfficialPCServer = 0x7,
		SearchingOfficialLegacy = 0x8,
		MAX = 0x9
	};
}