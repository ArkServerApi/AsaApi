#pragma once


enum class EEOSUserInterface_SwitchToCrossPlatformAccount_Choice:unsigned char
{
	SwitchToThisAccount = 0x0,
	LinkADifferentAccount = 0x1,
	CancelLinking = 0x2
};