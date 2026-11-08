#pragma once


namespace EWeaponState
{
	enum Type:int
	{
		Idle = 0x0,
		Firing = 0x1,
		Reloading = 0x2,
		Equipping = 0x3,
		UnEquipping = 0x4
	};
}