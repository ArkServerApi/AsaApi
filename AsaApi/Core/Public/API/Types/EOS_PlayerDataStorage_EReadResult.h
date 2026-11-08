#pragma once


enum class EOS_PlayerDataStorage_EReadResult:int
{
	EOS_RR_ContinueReading = 0x1,
	EOS_RR_FailRequest = 0x2,
	EOS_RR_CancelRequest = 0x3
};