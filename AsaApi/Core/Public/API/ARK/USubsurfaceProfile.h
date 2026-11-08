#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class USubsurfaceProfile : public UObject
{
public:
	USubsurfaceProfile() = delete;
	~USubsurfaceProfile() = delete;
	USubsurfaceProfile(const USubsurfaceProfile&) = delete;
	USubsurfaceProfile& operator=(const USubsurfaceProfile&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USubsurfaceProfile"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USubsurfaceProfile"); }
	FSubsurfaceProfileStruct& SettingsField() { return *GetNativePointerField<FSubsurfaceProfileStruct*>(this, "USubsurfaceProfile.Settings"); }
	FGuid& GuidField() { return *GetNativePointerField<FGuid*>(this, "USubsurfaceProfile.Guid"); }
	void PostDuplicate(EDuplicateMode::Type DuplicateMode) { NativeCall<void, EDuplicateMode::Type>(this, "USubsurfaceProfile.PostDuplicate(EDuplicateMode::Type)", DuplicateMode); }
	void BeginDestroy() { NativeCall<void>(this, "USubsurfaceProfile.BeginDestroy()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USubsurfaceProfile.Serialize(FArchive&)", Ar); }
	void PostLoad() { NativeCall<void>(this, "USubsurfaceProfile.PostLoad()"); }
};
