#pragma once


enum class ESNetSocketConnectionType:int
{
	k_ESNetSocketConnectionTypeNotConnected = 0x0,
	k_ESNetSocketConnectionTypeUDP = 0x1,
	k_ESNetSocketConnectionTypeUDPRelay = 0x2
};