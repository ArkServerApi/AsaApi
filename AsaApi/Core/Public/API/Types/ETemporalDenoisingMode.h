#pragma once


enum class ETemporalDenoisingMode:unsigned int
{
	ETDM_DISABLED = 0x0,
	ETDM_OFFLINE = 0x1,
	ETDM_ONLINE = 0x2,
	ETDM_MAX = 0x3
};