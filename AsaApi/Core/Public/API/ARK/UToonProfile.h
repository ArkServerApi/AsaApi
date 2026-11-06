#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UToonProfile : public UObject
{
public:
	UToonProfile() = delete;
	~UToonProfile() = delete;
	UToonProfile(const UToonProfile&) = delete;
	UToonProfile& operator=(const UToonProfile&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UToonProfile"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UToonProfile"); }
	FToonProfileStruct& SettingsField() { return *GetNativePointerField<FToonProfileStruct*>(this, "UToonProfile.Settings"); }
	FGuid& GuidField() { return *GetNativePointerField<FGuid*>(this, "UToonProfile.Guid"); }
	void PostDuplicate(EDuplicateMode::Type DuplicateMode) { NativeCall<void, EDuplicateMode::Type>(this, "UToonProfile.PostDuplicate(EDuplicateMode::Type)", DuplicateMode); }
	void BeginDestroy() { NativeCall<void>(this, "UToonProfile.BeginDestroy()"); }
};
