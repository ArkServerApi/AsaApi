#pragma once


enum class EFunctionFlags:unsigned int
{
	FUNC_None = 0x0,
	FUNC_Final = 0x1,
	FUNC_RequiredAPI = 0x2,
	FUNC_BlueprintAuthorityOnly = 0x4,
	FUNC_BlueprintCosmetic = 0x8,
	FUNC_Net = 0x40,
	FUNC_NetReliable = 0x80,
	FUNC_NetRequest = 0x100,
	FUNC_Exec = 0x200,
	FUNC_Native = 0x400,
	FUNC_Event = 0x800,
	FUNC_NetResponse = 0x1000,
	FUNC_Static = 0x2000,
	FUNC_NetMulticast = 0x4000,
	FUNC_UbergraphFunction = 0xFFFF8000,
	FUNC_MulticastDelegate = 0x10000,
	FUNC_Public = 0x20000,
	FUNC_Private = 0x40000,
	FUNC_Protected = 0x80000,
	FUNC_Delegate = 0x100000,
	FUNC_NetServer = 0x200000,
	FUNC_HasOutParms = 0x400000,
	FUNC_HasDefaults = 0x800000,
	FUNC_NetClient = 0x1000000,
	FUNC_DLLImport = 0x2000000,
	FUNC_BlueprintCallable = 0x4000000,
	FUNC_BlueprintEvent = 0x8000000,
	FUNC_BlueprintPure = 0x10000000,
	FUNC_EditorOnly = 0x20000000,
	FUNC_Const = 0x40000000,
	FUNC_NetValidate = 0x80000000,
	FUNC_AllFlags = 0xFFFFFFFF
};