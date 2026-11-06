#pragma once


namespace EPrimalCharacterStatusValue
{
	enum Type:int
	{
		Health = 0x0,
		Stamina = 0x1,
		Torpidity = 0x2,
		Oxygen = 0x3,
		Food = 0x4,
		Water = 0x5,
		Temperature = 0x6,
		Weight = 0x7,
		MeleeDamageMultiplier = 0x8,
		SpeedMultiplier = 0x9,
		TemperatureFortitude = 0xA,
		CraftingSpeedMultiplier = 0xB,
		MAX = 0xC
	};
}