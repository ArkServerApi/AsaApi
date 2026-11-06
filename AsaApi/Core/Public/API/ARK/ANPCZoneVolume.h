#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct ANPCZoneVolume : public AVolume
{
public:
	ANPCZoneVolume() = delete;
	~ANPCZoneVolume() = delete;
	ANPCZoneVolume(const ANPCZoneVolume&) = delete;
	ANPCZoneVolume& operator=(const ANPCZoneVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ANPCZoneVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANPCZoneVolume"); }

	float& HibernatedCountWeightsField() { return *GetNativePointerField<float*>(this, "ANPCZoneVolume.HibernatedCountWeights"); }
	TArray<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& OverlappedDinosField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "ANPCZoneVolume.OverlappedDinos"); }
	float& CountWeightsField() { return *GetNativePointerField<float*>(this, "ANPCZoneVolume.CountWeights"); }
	BitFieldValue<bool, unsigned __int32> bOnlyCountWaterDinos() { return { this, "ANPCZoneVolume.bOnlyCountWaterDinos"}; }
	BitFieldValue<bool, unsigned __int32> bOnlyCountLandDinos() { return { this, "ANPCZoneVolume.bOnlyCountLandDinos"}; }
	BitFieldValue<bool, unsigned __int32> bDoHigherQualityLedgeDetection() { return { this, "ANPCZoneVolume.bDoHigherQualityLedgeDetection"}; }
	BitFieldValue<bool, unsigned __int32> bCountTamedDinos() { return { this, "ANPCZoneVolume.bCountTamedDinos"}; }
	void OnBeginOverlap(AActor* OverlappedActor, AActor* Actor) { NativeCall<void, AActor*, AActor*>(this, "ANPCZoneVolume.OnBeginOverlap(AActor*,AActor*)", OverlappedActor, Actor); }
	void OnEndOverlap(AActor* OverlappedActor, AActor* Actor) { NativeCall<void, AActor*, AActor*>(this, "ANPCZoneVolume.OnEndOverlap(AActor*,AActor*)", OverlappedActor, Actor); }
	void BeginPlay() { NativeCall<void>(this, "ANPCZoneVolume.BeginPlay()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "ANPCZoneVolume.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* GetOverlappedDinos(TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*, TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*>(this, "ANPCZoneVolume.GetOverlappedDinos()", result); }
	void ResyncWithHibernationManager() { NativeCall<void>(this, "ANPCZoneVolume.ResyncWithHibernationManager()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ANPCZoneVolume._getUObject()"); }
	void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "ANPCZoneVolume.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
	int GetNumNPCTouching() { return NativeCall<int>(this, "ANPCZoneVolume.GetNumNPCTouching()"); }
};
