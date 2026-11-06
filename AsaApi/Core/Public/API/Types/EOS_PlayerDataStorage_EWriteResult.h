#pragma once


enum class EOS_PlayerDataStorage_EWriteResult:int
{
	EOS_WR_ContinueWriting = 0x1,
	EOS_WR_CompleteRequest = 0x2,
	EOS_WR_FailRequest = 0x3,
	EOS_WR_CancelRequest = 0x4
};