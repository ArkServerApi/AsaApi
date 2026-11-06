#pragma once
#include "BulkForward.h"
#include "ULevelInstanceSubsystem.h"

struct UPrimalLevelInstanceSubsystem : public ULevelInstanceSubsystem
{
public:
	UPrimalLevelInstanceSubsystem() = delete;
	~UPrimalLevelInstanceSubsystem() = delete;
	UPrimalLevelInstanceSubsystem(const UPrimalLevelInstanceSubsystem&) = delete;
	UPrimalLevelInstanceSubsystem& operator=(const UPrimalLevelInstanceSubsystem&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalLevelInstanceSubsystem"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalLevelInstanceSubsystem"); }

	void Deinitialize() { NativeCall<void>(this, "UPrimalLevelInstanceSubsystem.Deinitialize()"); }
	void Initialize(FSubsystemCollectionBase& Collection) { NativeCall<void, FSubsystemCollectionBase&>(this, "UPrimalLevelInstanceSubsystem.Initialize(FSubsystemCollectionBase&)", Collection); }
	bool DoesSupportWorldType(EWorldType::Type WorldType) { return NativeCall<bool, EWorldType::Type>(this, "UPrimalLevelInstanceSubsystem.DoesSupportWorldType(EWorldType::Type)", WorldType); }
};
