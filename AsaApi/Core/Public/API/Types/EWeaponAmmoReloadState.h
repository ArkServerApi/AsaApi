#pragma once


enum class EWeaponAmmoReloadState:unsigned char
{
	Playing_Anim = 0x0,
	Waiting_For_Ammo = 0x1,
	Ready = 0x2
};