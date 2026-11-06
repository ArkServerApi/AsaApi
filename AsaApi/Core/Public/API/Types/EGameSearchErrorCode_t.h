#pragma once


enum class EGameSearchErrorCode_t:int
{
	k_EGameSearchErrorCode_OK = 0x1,
	k_EGameSearchErrorCode_Failed_Search_Already_In_Progress = 0x2,
	k_EGameSearchErrorCode_Failed_No_Search_In_Progress = 0x3,
	k_EGameSearchErrorCode_Failed_Not_Lobby_Leader = 0x4,
	k_EGameSearchErrorCode_Failed_No_Host_Available = 0x5,
	k_EGameSearchErrorCode_Failed_Search_Params_Invalid = 0x6,
	k_EGameSearchErrorCode_Failed_Offline = 0x7,
	k_EGameSearchErrorCode_Failed_NotAuthorized = 0x8,
	k_EGameSearchErrorCode_Failed_Unknown_Error = 0x9
};