#pragma once


enum class ELANBeaconVersionHistory:unsigned char
{
	HISTORY_INITIAL = 0xB,
	HISTORY_BEACON_GUID = 0xC,
	HISTORY_PLUS_ONE = 0xD,
	HISTORY_LATEST = 0xC
};