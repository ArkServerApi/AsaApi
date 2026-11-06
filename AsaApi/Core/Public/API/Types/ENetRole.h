#pragma once


enum class ENetRole:int
{
	ROLE_None = 0x0,
	ROLE_SimulatedProxy = 0x1,
	ROLE_AutonomousProxy = 0x2,
	ROLE_Authority = 0x3,
	ROLE_MAX = 0x4
};