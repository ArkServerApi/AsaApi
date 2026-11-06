#pragma once


namespace ELeaderboardColumnName
{
	enum Type:int
	{
		MissionTag = 0x0,
		PlayerNetId = 0x1,
		TribeId = 0x2,
		TimestampUtc = 0x3,
		FloatValue = 0x4,
		IntValue = 0x5,
		NameValue = 0x6,
		StringValue = 0x7
	};
}