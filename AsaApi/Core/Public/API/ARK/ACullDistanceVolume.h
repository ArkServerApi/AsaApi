#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct ACullDistanceVolume : public AVolume
{
public:
	ACullDistanceVolume() = delete;
	~ACullDistanceVolume() = delete;
	ACullDistanceVolume(const ACullDistanceVolume&) = delete;
	ACullDistanceVolume& operator=(const ACullDistanceVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ACullDistanceVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ACullDistanceVolume"); }

	BitFieldValue<bool, unsigned __int32> bEnabled() { return { this, "ACullDistanceVolume.bEnabled"}; }
	static bool CanBeAffectedByVolumes(UPrimitiveComponent* PrimitiveComponent) { return NativeCall<bool, UPrimitiveComponent*>(nullptr, "ACullDistanceVolume.CanBeAffectedByVolumes(UPrimitiveComponent*)", PrimitiveComponent); }
};
