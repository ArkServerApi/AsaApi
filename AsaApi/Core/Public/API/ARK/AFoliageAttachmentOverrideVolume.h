#pragma once
#include "BulkForward.h"
#include "AInfo.h"

struct AFoliageAttachmentOverrideVolume : public AInfo
{
public:
	AFoliageAttachmentOverrideVolume() = delete;
	~AFoliageAttachmentOverrideVolume() = delete;
	AFoliageAttachmentOverrideVolume(const AFoliageAttachmentOverrideVolume&) = delete;
	AFoliageAttachmentOverrideVolume& operator=(const AFoliageAttachmentOverrideVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AFoliageAttachmentOverrideVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AFoliageAttachmentOverrideVolume"); }

	BitFieldValue<bool, unsigned __int32> bAddedToArray() { return { this, "AFoliageAttachmentOverrideVolume.bAddedToArray"}; }
	void Destroyed() { NativeCall<void>(this, "AFoliageAttachmentOverrideVolume.Destroyed()"); }
	void BeginPlay() { NativeCall<void>(this, "AFoliageAttachmentOverrideVolume.BeginPlay()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AFoliageAttachmentOverrideVolume.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
};
