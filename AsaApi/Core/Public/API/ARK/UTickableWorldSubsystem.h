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
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UTickableWorldSubsystem.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "UTickableWorldSubsystem.bInitialized"); }
	void BeginDestroy() { NativeCall<void>(this, "UTickableWorldSubsystem.BeginDestroy()"); }
	void Deinitialize() { NativeCall<void>(this, "UTickableWorldSubsystem.Deinitialize()"); }
	void Initialize(FSubsystemCollectionBase& Collection) { NativeCall<void, FSubsystemCollectionBase&>(this, "UTickableWorldSubsystem.Initialize(FSubsystemCollectionBase&)", Collection); }
};
