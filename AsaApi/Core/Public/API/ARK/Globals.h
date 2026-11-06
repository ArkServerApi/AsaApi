#pragma once

#include "EFindObjectFlags.h"
#include <Containers/StringView.h>


struct Globals
{
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UObject* StaticLoadObject(UClass* ObjectClass, UObject* InOuter, const wchar_t* InName, const wchar_t* Filename, 		unsigned int LoadFlags, DWORD64 Sandbox, bool bAllowObjectReconciliation);

	static UObject* StaticFindObject(UClass* objectClass, UObject* outer, const wchar_t* name, bool exactClass = false)
	{
		static_assert(sizeof(TStringView<wchar_t>) == 16);
		static_assert(alignof(TStringView<wchar_t>) == 8);
		return NativeCall<UObject*, UClass*, UObject*, TStringView<wchar_t>, EFindObjectFlags>(
			nullptr, "Global.StaticFindObject(UClass*,UObject*,TStringView<wchar_t>,EFindObjectFlags)",
			objectClass, outer, TStringView<wchar_t>(name),
			exactClass ? EFindObjectFlags::ExactClass : EFindObjectFlags::None);
	}

	static UObject* StaticConstructObject(FStaticConstructObjectParameters& Params)
	{
		return NativeCall<UObject*, FStaticConstructObjectParameters&>(nullptr, "Global.StaticConstructObject_Internal(FStaticConstructObjectParameters&)", Params);
	}

	static DataValue<struct UEngine*> GEngine() { return { "Global.GEngine" }; }
	static DataValue<class FString*> GGameUserSettingsIni() { return { "Global.GGameUserSettingsIni" }; }
	static DataValue<struct FConfigCacheIni*> GConfig() { return { "Global.GConfig" }; }
	static DataValue<FUObjectArray> GUObjectArray() { return { "Global.GUObjectArray" }; }
};
