#pragma once


namespace EOnlineServerConnectionStatus
{
	enum Type: char
	{
		Normal = 0x0,
		NotConnected = 0x1,
		Connected = 0x2,
		ConnectionDropped = 0x3,
		NoNetworkConnection = 0x4,
		ServiceUnavailable = 0x5,
		UpdateRequired = 0x6,
		ServersTooBusy = 0x7,
		DuplicateLoginDetected = 0x8,
		InvalidUser = 0x9,
		NotAuthorized = 0xA,
		InvalidSession = 0xB
	};
}