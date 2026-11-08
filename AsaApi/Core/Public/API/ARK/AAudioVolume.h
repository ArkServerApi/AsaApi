#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct AAudioVolume : public AVolume
{
public:
	AAudioVolume() = delete;
	~AAudioVolume() = delete;
	AAudioVolume(const AAudioVolume&) = delete;
	AAudioVolume& operator=(const AAudioVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AAudioVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AAudioVolume"); }

	float& PriorityField() { return *GetNativePointerField<float*>(this, "AAudioVolume.Priority"); }
	FReverbSettings& SettingsField() { return *GetNativePointerField<FReverbSettings*>(this, "AAudioVolume.Settings"); }
	FInteriorSettings& AmbientZoneSettingsField() { return *GetNativePointerField<FInteriorSettings*>(this, "AAudioVolume.AmbientZoneSettings"); }
	BitFieldValue<bool, unsigned __int32> bEnabled() { return { this, "AAudioVolume.bEnabled"}; }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "AAudioVolume.PostUnregisterAllComponents()"); }
	void UpdateProxy() { NativeCall<void>(this, "AAudioVolume.UpdateProxy()"); }
	void AddProxy() { NativeCall<void>(this, "AAudioVolume.AddProxy()"); }
	void OnRep_bEnabled() { NativeCall<void>(this, "AAudioVolume.OnRep_bEnabled()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AAudioVolume.PostRegisterAllComponents()"); }
	void RemoveProxy() { NativeCall<void>(this, "AAudioVolume.RemoveProxy()"); }
};
