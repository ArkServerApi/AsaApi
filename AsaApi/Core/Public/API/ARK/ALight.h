#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ALight : public AActor
{
public:
	ALight() = delete;
	~ALight() = delete;
	ALight(const ALight&) = delete;
	ALight& operator=(const ALight&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALight"); }

	BitFieldValue<bool, unsigned __int32> bEnabled() { return { this, "ALight.bEnabled"}; }
	void Destroyed() { NativeCall<void>(this, "ALight.Destroyed()"); }
	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "ALight.IsLevelBoundsRelevant()"); }
	bool IsToggleable() { return NativeCall<bool>(this, "ALight.IsToggleable()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALight"); }
	void SetMobility(EComponentMobility::Type InMobility) { NativeCall<void, EComponentMobility::Type>(this, "ALight.SetMobility(EComponentMobility::Type)", InMobility); }
	void PostLoad() { NativeCall<void>(this, "ALight.PostLoad()"); }
	void OnRep_bEnabled() { NativeCall<void>(this, "ALight.OnRep_bEnabled()"); }
};
