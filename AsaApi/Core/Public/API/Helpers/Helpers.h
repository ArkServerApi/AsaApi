#pragma once
#include "API/UE/Containers/UnrealString.h"
#include "API/ARK/Ark.h"

FORCEINLINE FString GetDllName()
{
	HMODULE hModule = NULL;
	GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
		(LPCSTR)&AActor::StaticClass,
		&hModule);
	wchar_t moduleName[MAX_PATH];
	GetModuleFileNameW(hModule, moduleName, MAX_PATH);
	return moduleName;
}