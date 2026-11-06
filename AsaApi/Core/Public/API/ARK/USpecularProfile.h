#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class USpecularProfile : public UObject
{
public:
	USpecularProfile() = delete;
	~USpecularProfile() = delete;
	USpecularProfile(const USpecularProfile&) = delete;
	USpecularProfile& operator=(const USpecularProfile&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	FSpecularProfileStruct& SettingsField() { return *GetNativePointerField<FSpecularProfileStruct*>(this, "USpecularProfile.Settings"); }
	FGuid& GuidField() { return *GetNativePointerField<FGuid*>(this, "USpecularProfile.Guid"); }
	void PostDuplicate(EDuplicateMode::Type DuplicateMode) { NativeCall<void, EDuplicateMode::Type>(this, "USpecularProfile.PostDuplicate(EDuplicateMode::Type)", DuplicateMode); }
	void BeginDestroy() { NativeCall<void>(this, "USpecularProfile.BeginDestroy()"); }
};
