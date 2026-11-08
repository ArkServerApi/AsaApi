#pragma once


namespace EAudioMixerChannel
{
	enum Type:int
	{
		FrontLeft = 0x0,
		FrontRight = 0x1,
		FrontCenter = 0x2,
		LowFrequency = 0x3,
		BackLeft = 0x4,
		BackRight = 0x5,
		FrontLeftOfCenter = 0x6,
		FrontRightOfCenter = 0x7,
		BackCenter = 0x8,
		SideLeft = 0x9,
		SideRight = 0xA,
		TopCenter = 0xB,
		TopFrontLeft = 0xC,
		TopFrontCenter = 0xD,
		TopFrontRight = 0xE,
		TopBackLeft = 0xF,
		TopBackCenter = 0x10,
		TopBackRight = 0x11,
		Unknown = 0x12,
		ChannelTypeCount = 0x13,
		DefaultChannel = 0x0
	};
}