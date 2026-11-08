#pragma once


enum class EOodleNetworkEnableMode:unsigned char
{
	AlwaysEnabled = 0x0,
	WhenCompressedPacketReceived = 0x1
};