#pragma once


enum class ENetMode:int
{
	NM_Standalone = 0x0,
	NM_DedicatedServer = 0x1,
	NM_ListenServer = 0x2,
	NM_Client = 0x3,
	NM_MAX = 0x4
};