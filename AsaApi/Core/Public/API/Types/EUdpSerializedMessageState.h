#pragma once


enum class EUdpSerializedMessageState:int
{
	Complete = 0x0,
	Incomplete = 0x1,
	Invalid = 0x2
};