#pragma once


enum class EOS_EAntiCheatCommonClientAuthStatus:int
{
	EOS_ACCCAS_Invalid = 0x0,
	EOS_ACCCAS_LocalAuthComplete = 0x1,
	EOS_ACCCAS_RemoteAuthComplete = 0x2
};