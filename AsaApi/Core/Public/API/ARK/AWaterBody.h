#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AWaterBody : public AActor
{
public:
	AWaterBody() = delete;
	~AWaterBody() = delete;
	AWaterBody(const AWaterBody&) = delete;
	AWaterBody& operator=(const AWaterBody&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWaterBody"); }

	int& WaterBodyIndexField() { return *GetNativePointerField<int*>(this, "AWaterBody.WaterBodyIndex"); }
	UE::Math::TVector<double>* GetWaterVelocityVectorAtSplineInputKey(UE::Math::TVector<double>* result, float InKey) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, float>(this, "AWaterBody.GetWaterVelocityVectorAtSplineInputKey(float)", result, InKey); }
	void PostInitProperties() { NativeCall<void>(this, "AWaterBody.PostInitProperties()"); }
	void DeprecateData() { NativeCall<void>(this, "AWaterBody.DeprecateData()"); }
	float GetAudioIntensityAtSplineInputKey(float InKey) { return NativeCall<float, float>(this, "AWaterBody.GetAudioIntensityAtSplineInputKey(float)", InKey); }
	bool AffectsWaterMesh() { return NativeCall<bool>(this, "AWaterBody.AffectsWaterMesh()"); }
	UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance() { return NativeCall<UMaterialInstanceDynamic*>(this, "AWaterBody.GetRiverToLakeTransitionMaterialInstance()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AWaterBody._getUObject()"); }
	void SetWaterWavesInternal(UWaterWavesBase* InWaterWaves) { NativeCall<void, UWaterWavesBase*>(this, "AWaterBody.SetWaterWavesInternal(UWaterWavesBase*)", InWaterWaves); }
	float GetWaterVelocityAtSplineInputKey(float InKey) { return NativeCall<float, float>(this, "AWaterBody.GetWaterVelocityAtSplineInputKey(float)", InKey); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "AWaterBody.Serialize(FArchive&)", Ar); }
	void InitializeBody() { NativeCall<void>(this, "AWaterBody.InitializeBody()"); }
	bool CanEverAffectWaterInfo() { return NativeCall<bool>(this, "AWaterBody.CanEverAffectWaterInfo()"); }
	void NotifyActorEndOverlap(AActor* OtherActor) { NativeCall<void, AActor*>(this, "AWaterBody.NotifyActorEndOverlap(AActor*)", OtherActor); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWaterBody"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AWaterBody.PostRegisterAllComponents()"); }
	void PostLoad() { NativeCall<void>(this, "AWaterBody.PostLoad()"); }
	void NotifyActorBeginOverlap(AActor* OtherActor) { NativeCall<void, AActor*>(this, "AWaterBody.NotifyActorBeginOverlap(AActor*)", OtherActor); }
	bool AffectsLandscape() { return NativeCall<bool>(this, "AWaterBody.AffectsLandscape()"); }
	void UnregisterAllComponents(bool bForReregister) { NativeCall<void, bool>(this, "AWaterBody.UnregisterAllComponents(bool)", bForReregister); }
	UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance() { return NativeCall<UMaterialInstanceDynamic*>(this, "AWaterBody.GetRiverToOceanTransitionMaterialInstance()"); }
	bool CanEverAffectWaterMesh() { return NativeCall<bool>(this, "AWaterBody.CanEverAffectWaterMesh()"); }
	void PreRegisterAllComponents() { NativeCall<void>(this, "AWaterBody.PreRegisterAllComponents()"); }
	bool IsComponentRelevantForNavigation(UActorComponent* Component) { return NativeCall<bool, UActorComponent*>(this, "AWaterBody.IsComponentRelevantForNavigation(UActorComponent*)", Component); }
	void PreInitializeComponents() { NativeCall<void>(this, "AWaterBody.PreInitializeComponents()"); }
	bool IsHLODRelevant() { return NativeCall<bool>(this, "AWaterBody.IsHLODRelevant()"); }
};
