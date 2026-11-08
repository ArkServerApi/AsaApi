#pragma once


namespace EPrimalCharacterStatusState
{
	enum Type:int
	{
		Dead = 0x0,
		Winded = 0x1,
		Starvation = 0x2,
		Dehydration = 0x3,
		Suffocation = 0x4,
		Encumbered = 0x5,
		Hypothermia = 0x6,
		Hyperthermia = 0x7,
		Injured = 0x8,
		KnockedOut = 0x9,
		Sleeping = 0xA,
		Cold = 0xB,
		Hot = 0xC,
		Crafting = 0xD,
		MAX = 0xE
	};
}