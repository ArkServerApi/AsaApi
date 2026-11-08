#pragma once


enum class EGameplayDebuggerDataPack:unsigned char
{
	Persistent = 0x0,
	ResetOnActorChange = 0x1,
	ResetOnTick = 0x2
};