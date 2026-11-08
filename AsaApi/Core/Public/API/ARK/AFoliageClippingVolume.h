#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct AFoliageClippingVolume : public AVolume
{
public:
	AFoliageClippingVolume() = delete;
	~AFoliageClippingVolume() = delete;
	AFoliageClippingVolume(const AFoliageClippingVolume&) = delete;
	AFoliageClippingVolume& operator=(const AFoliageClippingVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AFoliageClippingVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AFoliageClippingVolume"); }

	BitFieldValue<bool, unsigned __int32> bEnabled() { return { this, "AFoliageClippingVolume.bEnabled"}; }
	BitFieldValue<bool, unsigned __int32> bIsNPCClippingVolume() { return { this, "AFoliageClippingVolume.bIsNPCClippingVolume"}; }
	BitFieldValue<bool, unsigned __int32> bAddedToArray() { return { this, "AFoliageClippingVolume.bAddedToArray"}; }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AFoliageClippingVolume.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void BeginPlay() { NativeCall<void>(this, "AFoliageClippingVolume.BeginPlay()"); }
	void Destroyed() { NativeCall<void>(this, "AFoliageClippingVolume.Destroyed()"); }
};
