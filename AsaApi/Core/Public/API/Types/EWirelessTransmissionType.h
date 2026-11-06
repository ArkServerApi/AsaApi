#pragma once


enum class EWirelessTransmissionType:unsigned char
{
	Custom = 0x0,
	Power = 0x1,
	Water = 0x2,
	Fuel = 0x3,
	Ammo = 0x4,
	Crafting = 0x5,
	ItemTransfer = 0x6
};