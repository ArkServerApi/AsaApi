#pragma once


enum class EUniverse:int
{
	k_EUniverseInvalid = 0x0,
	k_EUniversePublic = 0x1,
	k_EUniverseBeta = 0x2,
	k_EUniverseInternal = 0x3,
	k_EUniverseDev = 0x4,
	k_EUniverseMax = 0x5
};