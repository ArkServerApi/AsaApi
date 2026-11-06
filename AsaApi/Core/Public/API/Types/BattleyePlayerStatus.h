#pragma once


enum class BattleyePlayerStatus:int
{
	BE_NewPlayerPendingAdd = 0x0,
	BE_Connected = 0x1,
	BE_PendingRemoval = 0x2
};