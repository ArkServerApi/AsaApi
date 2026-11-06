#pragma once


enum class ESteelShieldDataFlags:int
{
	SteelShieldDataFlags_IsRollover = 0x2,
	SteelShieldDataFlags_IsRolloverAck = 0x4,
	SteelShieldDataFlags_HasWrap = 0x8,
	SteelShieldDataFlags_IsInitialPacket = 0x10
};