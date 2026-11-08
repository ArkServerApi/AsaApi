#pragma once


enum class EDurationControlOnlineState:int
{
	k_EDurationControlOnlineState_Invalid = 0x0,
	k_EDurationControlOnlineState_Offline = 0x1,
	k_EDurationControlOnlineState_Online = 0x2,
	k_EDurationControlOnlineState_OnlineHighPri = 0x3
};