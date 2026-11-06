#pragma once


namespace EPrimalItemType
{
	enum Type:int
	{
		MiscConsumable = 0x0,
		Equipment = 0x1,
		Weapon = 0x2,
		Ammo = 0x3,
		Structure = 0x4,
		Resource = 0x5,
		Skin = 0x6,
		WeaponAttachment = 0x7,
		Artifact = 0x8,
		MAX = 0x9
	};
}