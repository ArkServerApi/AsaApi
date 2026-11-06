#pragma once


enum class EP2PSend:int
{
	k_EP2PSendUnreliable = 0x0,
	k_EP2PSendUnreliableNoDelay = 0x1,
	k_EP2PSendReliable = 0x2,
	k_EP2PSendReliableWithBuffering = 0x3
};