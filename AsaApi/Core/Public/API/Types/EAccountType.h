#pragma once


enum class EAccountType:int
{
	k_EAccountTypeInvalid = 0x0,
	k_EAccountTypeIndividual = 0x1,
	k_EAccountTypeMultiseat = 0x2,
	k_EAccountTypeGameServer = 0x3,
	k_EAccountTypeAnonGameServer = 0x4,
	k_EAccountTypePending = 0x5,
	k_EAccountTypeContentServer = 0x6,
	k_EAccountTypeClan = 0x7,
	k_EAccountTypeChat = 0x8,
	k_EAccountTypeConsoleUser = 0x9,
	k_EAccountTypeAnonUser = 0xA,
	k_EAccountTypeMax = 0xB
};