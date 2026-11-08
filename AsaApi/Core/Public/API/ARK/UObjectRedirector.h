#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UObjectRedirector : public UObject
{
public:
	UObjectRedirector() = delete;
	~UObjectRedirector() = delete;
	UObjectRedirector(const UObjectRedirector&) = delete;
	UObjectRedirector& operator=(const UObjectRedirector&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UObjectRedirector"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UObjectRedirector"); }
	UObject*& DestinationObjectField() { return *GetNativePointerField<UObject**>(this, "UObjectRedirector.DestinationObject"); }
	bool HasNonEditorOnlyReferences() { return NativeCall<bool>(this, "UObjectRedirector.HasNonEditorOnlyReferences()"); }
	static void StaticRegisterNativesUObjectRedirector() { NativeCall<void>(nullptr, "UObjectRedirector.StaticRegisterNativesUObjectRedirector()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UObjectRedirector.Serialize(FArchive&)", Ar); }
	bool NeedsLoadForEditorGame() { return NativeCall<bool>(this, "UObjectRedirector.NeedsLoadForEditorGame()"); }
};
