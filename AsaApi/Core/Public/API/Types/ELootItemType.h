#pragma once


namespace ELootItemType
{
	enum Type:int
	{
		None = 0x0,
		Element = 0x1,
		Hexagons = 0x2,
		ResourceCommon = 0x3,
		ResourceUncommon = 0x4,
		ResourceRare = 0x5,
		ArmorTier1 = 0x6,
		ArmorTier2 = 0x7,
		ArmorTier3 = 0x8,
		ArmorTek = 0x9,
		WeaponTier1 = 0xA,
		WeaponTier2 = 0xB,
		WeaponTier3 = 0xC,
		WeaponTek = 0xD,
		AmmoTier1 = 0xE,
		AmmoTier2 = 0xF,
		AmmoTier3 = 0x10,
		Saddle = 0x11
	};
}