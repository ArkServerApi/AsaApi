#pragma once


namespace ETcpMessagingVersion
{
	enum Type:int
	{
		Initial = 0x0,
		ChangedMessageLengthToInt32 = 0x1,
		ChangedMessageContext = 0x2,
		VersionPlusOne = 0x3,
		LatestVersion = 0x2,
		OldestSupportedVersion = 0x1
	};
}