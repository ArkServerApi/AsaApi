#pragma once


namespace ENetworkFailure
{
	enum Type:int
	{
		NetDriverAlreadyExists = 0x0,
		NetDriverCreateFailure = 0x1,
		NetDriverListenFailure = 0x2,
		ConnectionLost = 0x3,
		ConnectionTimeout = 0x4,
		FailureReceived = 0x5,
		OutdatedClient = 0x6,
		OutdatedServer = 0x7,
		PendingConnectionFailure = 0x8,
		NetGuidMismatch = 0x9,
		NetChecksumMismatch = 0xA,
		TotalConversionIDMismatch = 0xB,
		ModMisMatch = 0xC,
		ModDLCNotInstalled = 0xD,
		BuildIdMismatch = 0xE,
		InvalidServerPassword = 0xF
	};
}