#pragma once


namespace ETravelFailure
{
	enum Type:int
	{
		NoLevel = 0x0,
		LoadMapFailure = 0x1,
		InvalidURL = 0x2,
		PackageMissing = 0x3,
		PackageVersion = 0x4,
		NoDownload = 0x5,
		TravelFailure = 0x6,
		CheatCommands = 0x7,
		PendingNetGameCreateFailure = 0x8,
		CloudSaveFailure = 0x9,
		ServerTravelFailure = 0xA,
		ClientTravelFailure = 0xB
	};
}