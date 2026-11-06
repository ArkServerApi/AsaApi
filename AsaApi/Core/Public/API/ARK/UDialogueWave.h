#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UDialogueWave : public UObject
{
public:
	UDialogueWave() = delete;
	~UDialogueWave() = delete;
	UDialogueWave(const UDialogueWave&) = delete;
	UDialogueWave& operator=(const UDialogueWave&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDialogueWave"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDialogueWave"); }
	FString& SpokenTextField() { return *GetNativePointerField<FString*>(this, "UDialogueWave.SpokenText"); }
	FString& SubtitleOverrideField() { return *GetNativePointerField<FString*>(this, "UDialogueWave.SubtitleOverride"); }
	FGuid& LocalizationGUIDField() { return *GetNativePointerField<FGuid*>(this, "UDialogueWave.LocalizationGUID"); }
	BitFieldValue<bool, unsigned __int32> bMature() { return { this, "UDialogueWave.bMature"}; }
	BitFieldValue<bool, unsigned __int32> bOverride_SubtitleOverride() { return { this, "UDialogueWave.bOverride_SubtitleOverride"}; }
	USoundBase* GetWaveFromContext(const FDialogueContext& Context) { return NativeCall<USoundBase*, const FDialogueContext&>(this, "UDialogueWave.GetWaveFromContext(FDialogueContext&)", Context); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UDialogueWave.Serialize(FArchive&)", Ar); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UDialogueWave.PostDuplicate(bool)", bDuplicateForPIE); }
	void CopySoundBasePropertiesToProxy(const USoundBase* InSoundBase, USoundBase* Proxy) { NativeCall<void, const USoundBase*, USoundBase*>(this, "UDialogueWave.CopySoundBasePropertiesToProxy(USoundBase*,USoundBase*)", InSoundBase, Proxy); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UDialogueWave.IsReadyForFinishDestroy()"); }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "UDialogueWave.GetDesc()", result); }
	void PostLoad() { NativeCall<void>(this, "UDialogueWave.PostLoad()"); }
};
