#pragma once


namespace EOnlineDataAdvertisementType
{
	enum Type:int
	{
		DontAdvertise = 0x0,
		ViaPingOnly = 0x1,
		ViaOnlineService = 0x2,
		ViaOnlineServiceAndPing = 0x3
	};
}