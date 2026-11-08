#pragma once


enum class EHandshakeInstallState:int
{
	EHIS_None = 0x0,
	EHIS_Initializing = 0x1,
	EHIS_Installing = 0x2,
	EHIS_Done = 0x3,
	EHIS_Failure = 0x4
};