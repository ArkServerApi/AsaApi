#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "USoundWave.h"

class USoundSourceBus : public USoundWave
{
public:
	USoundSourceBus() = delete;
	~USoundSourceBus() = delete;
	USoundSourceBus(const USoundSourceBus&) = delete;
	USoundSourceBus& operator=(const USoundSourceBus&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USoundSourceBus"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USoundSourceBus"); }
	float& SourceBusDurationField() { return *GetNativePointerField<float*>(this, "USoundSourceBus.SourceBusDuration"); }
	BitFieldValue<bool, unsigned __int32> bAutoDeactivateWhenSilent() { return { this, "USoundSourceBus.bAutoDeactivateWhenSilent"}; }
	bool IsSeekable() { return NativeCall<bool>(this, "USoundSourceBus.IsSeekable()"); }
	void SerializeCuePoints(FArchive& Ar, bool bIsLoadingFromCookedArchive) { NativeCall<void, FArchive&, bool>(this, "USoundSourceBus.SerializeCuePoints(FArchive&,bool)", Ar, bIsLoadingFromCookedArchive); }
	void PostLoad() { NativeCall<void>(this, "USoundSourceBus.PostLoad()"); }
	bool IsPlayable() { return NativeCall<bool>(this, "USoundSourceBus.IsPlayable()"); }
	float GetDuration() { return NativeCall<float>(this, "USoundSourceBus.GetDuration()"); }
	void Init() { NativeCall<void>(this, "USoundSourceBus.Init()"); }
	void Serialize(FArchive& InArchive) { NativeCall<void, FArchive&>(this, "USoundSourceBus.Serialize(FArchive&)", InArchive); }
	void SerializeCookedPlatformData(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USoundSourceBus.SerializeCookedPlatformData(FArchive&)", Ar); }
};
