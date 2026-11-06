#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "USoundSubmixWithParentBase.h"

struct USoundSubmix : public USoundSubmixWithParentBase
{
public:
	USoundSubmix() = delete;
	~USoundSubmix() = delete;
	USoundSubmix(const USoundSubmix&) = delete;
	USoundSubmix& operator=(const USoundSubmix&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USoundSubmix"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USoundSubmix"); }
	int& EnvelopeFollowerAttackTimeField() { return *GetNativePointerField<int*>(this, "USoundSubmix.EnvelopeFollowerAttackTime"); }
	int& EnvelopeFollowerReleaseTimeField() { return *GetNativePointerField<int*>(this, "USoundSubmix.EnvelopeFollowerReleaseTime"); }
	FSoundModulationDestinationSettings& OutputVolumeModulationField() { return *GetNativePointerField<FSoundModulationDestinationSettings*>(this, "USoundSubmix.OutputVolumeModulation"); }
	FSoundModulationDestinationSettings& WetLevelModulationField() { return *GetNativePointerField<FSoundModulationDestinationSettings*>(this, "USoundSubmix.WetLevelModulation"); }
	FSoundModulationDestinationSettings& DryLevelModulationField() { return *GetNativePointerField<FSoundModulationDestinationSettings*>(this, "USoundSubmix.DryLevelModulation"); }
	FOnSubmixRecordedFileDone& OnSubmixRecordedFileDoneField() { return *GetNativePointerField<FOnSubmixRecordedFileDone*>(this, "USoundSubmix.OnSubmixRecordedFileDone"); }
	BitFieldValue<bool, unsigned char> bMuteWhenBackgrounded() { return { this, "USoundSubmix.bMuteWhenBackgrounded"}; }
	BitFieldValue<bool, unsigned char> bSendToAudioLink() { return { this, "USoundSubmix.bSendToAudioLink"}; }
	void PostLoad() { NativeCall<void>(this, "USoundSubmix.PostLoad()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USoundSubmix.Serialize(FArchive&)", Ar); }
	void PushModulationChanges() { NativeCall<void>(this, "USoundSubmix.PushModulationChanges()"); }
};
