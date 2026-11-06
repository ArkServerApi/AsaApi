#pragma once


enum class NETIO_TRIAGE_BLOCK_ID:int
{
	NetioTriageBlockIdNDIS = 0x0,
	NetioTriageBlockIdTCPIP = 0x1,
	NetioTriageBlockIdAFD = 0x2,
	NetioTriageBlockIdMAX = 0x3
};