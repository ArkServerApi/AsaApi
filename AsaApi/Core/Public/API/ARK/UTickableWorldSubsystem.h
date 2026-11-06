#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UWorldSubsystem.h"

class UTickableWorldSubsystem : public UWorldSubsystem
{
public:
	UTickableWorldSubsystem() = delete;
	~UTickableWorldSubsystem() = delete;
	UTickableWorldSubsystem(const UTickableWorldSubsystem&) = delete;
	UTickableWorldSubsystem& operator=(const UTickableWorldSubsystem&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTickableWorldSubsystem"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTickableWorldSubsystem"); }
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "UTickableWorldSubsystem.bInitialized"); }
	void BeginDestroy() { NativeCall<void>(this, "UTickableWorldSubsystem.BeginDestroy()"); }
	void Deinitialize() { NativeCall<void>(this, "UTickableWorldSubsystem.Deinitialize()"); }
	void Initialize(FSubsystemCollectionBase& Collection) { NativeCall<void, FSubsystemCollectionBase&>(this, "UTickableWorldSubsystem.Initialize(FSubsystemCollectionBase&)", Collection); }
};
