#pragma once


namespace EUserPrivileges
{
	enum Type:int
	{
		CanPlay = 0x0,
		CanPlayOnline = 0x1,
		CanCommunicateOnline = 0x2,
		CanUseUserGeneratedContent = 0x3,
		CanUserCrossPlay = 0x4
	};
}