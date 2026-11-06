#pragma once


enum class EVoiceBlockReasons:unsigned char
{
	None = 0x0,
	Muted = 0x1,
	MutedBy = 0x2,
	Gameplay = 0x4,
	Blocked = 0x8,
	BlockedBy = 0x10
};