#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ANavSystemConfigOverride : public AActor
{
public:
	ANavSystemConfigOverride() = delete;
	~ANavSystemConfigOverride() = delete;
	ANavSystemConfigOverride(const ANavSystemConfigOverride&) = delete;
	ANavSystemConfigOverride& operator=(const ANavSystemConfigOverride&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ANavSystemConfigOverride"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANavSystemConfigOverride"); }

	ENavSystemOverridePolicy& OverridePolicyField() { return *GetNativePointerField<ENavSystemOverridePolicy*>(this, "ANavSystemConfigOverride.OverridePolicy"); }
	BitFieldValue<bool, unsigned char> bLoadOnClient() { return { this, "ANavSystemConfigOverride.bLoadOnClient"}; }
	void BeginPlay() { NativeCall<void>(this, "ANavSystemConfigOverride.BeginPlay()"); }
	void AppendToNavSystem(UNavigationSystemBase& PrevNavSys) { NativeCall<void, UNavigationSystemBase&>(this, "ANavSystemConfigOverride.AppendToNavSystem(UNavigationSystemBase&)", PrevNavSys); }
	void PostInitProperties() { NativeCall<void>(this, "ANavSystemConfigOverride.PostInitProperties()"); }
	void OverrideNavSystem() { NativeCall<void>(this, "ANavSystemConfigOverride.OverrideNavSystem()"); }
};
