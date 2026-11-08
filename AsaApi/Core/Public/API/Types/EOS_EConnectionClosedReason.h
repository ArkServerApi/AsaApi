#pragma once


enum class EOS_EConnectionClosedReason:int
{
	EOS_CCR_Unknown = 0x0,
	EOS_CCR_ClosedByLocalUser = 0x1,
	EOS_CCR_ClosedByPeer = 0x2,
	EOS_CCR_TimedOut = 0x3,
	EOS_CCR_TooManyConnections = 0x4,
	EOS_CCR_InvalidMessage = 0x5,
	EOS_CCR_InvalidData = 0x6,
	EOS_CCR_ConnectionFailed = 0x7,
	EOS_CCR_ConnectionClosed = 0x8,
	EOS_CCR_NegotiationFailed = 0x9,
	EOS_CCR_UnexpectedError = 0xA
};