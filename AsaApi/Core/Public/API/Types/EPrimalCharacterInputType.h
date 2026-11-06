#pragma once


namespace EPrimalCharacterInputType
{
	enum Type:int
	{
		PrimaryFire = 0x0,
		Targeting = 0x1,
		AltFire = 0x2,
		SwitchWeapon = 0x3,
		Reload = 0x4,
		Crouch = 0x5,
		Prone = 0x6,
		CrouchProneToggle = 0x7,
		SwitchMap = 0x8,
		DinoAttack = 0x9
	};
}