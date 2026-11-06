#pragma once


namespace EXPType
{
	enum Type:int
	{
		XP_GENERIC = 0x0,
		XP_KILL = 0x1,
		XP_HARVEST = 0x2,
		XP_CRAFT = 0x3,
		XP_SPECIAL = 0x4,
		XP_ALPHAKILL = 0x5,
		XP_CAVEKILL = 0x6,
		XP_WILDKILL = 0x7,
		XP_BOSSKILL = 0x8,
		XP_TAMEDKILL = 0x9,
		XP_UNCLAIMEDKILL = 0xA,
		XP_EXPLORERNOTE = 0xB,
		MAX = 0xC
	};
}