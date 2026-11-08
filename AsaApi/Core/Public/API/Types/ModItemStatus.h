#pragma once


enum class ModItemStatus:int
{
	IS_None = 0x0,
	IS_Ready = 0x1,
	IS_RetrieveingInfo = 0x2,
	IS_Subscribing = 0x3,
	IS_Waiting = 0x4,
	IS_Installing = 0x5,
	IS_Copying = 0x6,
	IS_Failed = 0x7
};