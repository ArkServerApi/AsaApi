#pragma once


enum class EOS_TitleStorage_EReadResult:int
{
	EOS_TS_RR_ContinueReading = 0x1,
	EOS_TS_RR_FailRequest = 0x2,
	EOS_TS_RR_CancelRequest = 0x3
};