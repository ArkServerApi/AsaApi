#pragma once


enum class EOS_EPacketReliability:int
{
	EOS_PR_UnreliableUnordered = 0x0,
	EOS_PR_ReliableUnordered = 0x1,
	EOS_PR_ReliableOrdered = 0x2
};