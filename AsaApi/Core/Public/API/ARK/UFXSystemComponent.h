#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UFXSystemComponent : public UPrimitiveComponent
{
public:
	UFXSystemComponent() = delete;
	~UFXSystemComponent() = delete;
	UFXSystemComponent(const UFXSystemComponent&) = delete;
	UFXSystemComponent& operator=(const UFXSystemComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UFXSystemComponent"); }

	BitFieldValue<bool, unsigned char> bPSOPrecacheCalled() { return { this, "UFXSystemComponent.bPSOPrecacheCalled"}; }
	void DeactivateImmediate() { NativeCall<void>(this, "UFXSystemComponent.DeactivateImmediate()"); }
	void PrecacheAssetPSOs(UFXSystemAsset* FXSystemAsset) { NativeCall<void, UFXSystemAsset*>(this, "UFXSystemComponent.PrecacheAssetPSOs(UFXSystemAsset*)", FXSystemAsset); }
	void SetAutoAttachmentParameters(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule) { NativeCall<void, USceneComponent*, FName, EAttachmentRule, EAttachmentRule, EAttachmentRule>(this, "UFXSystemComponent.SetAutoAttachmentParameters(USceneComponent*,FName,EAttachmentRule,EAttachmentRule,EAttachmentRule)", Parent, SocketName, LocationRule, RotationRule, ScaleRule); }
	void SetUseAutoManageAttachment(bool bAutoManage) { NativeCall<void, bool>(this, "UFXSystemComponent.SetUseAutoManageAttachment(bool)", bAutoManage); }
	void SetVectorParameter(FName ParameterName, UE::Math::TVector<double>* Param) { if (!Param) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FName, UE :: Math :: TVector < double >>(this, "UFXSystemComponent.SetVectorParameter(FName,UE::Math::TVector<double>)", ParameterName, *Param); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UFXSystemComponent"); }
	void SetBoolParameter(FName ParameterName, bool Param) { NativeCall<void, FName, bool>(this, "UFXSystemComponent.SetBoolParameter(FName,bool)", ParameterName, Param); }
	void SetFloatParameter(FName ParameterName, float Param) { NativeCall<void, FName, float>(this, "UFXSystemComponent.SetFloatParameter(FName,float)", ParameterName, Param); }
	void SetEmitterEnable(FName EmitterName, bool bNewEnableState) { NativeCall<void, FName, bool>(this, "UFXSystemComponent.SetEmitterEnable(FName,bool)", EmitterName, bNewEnableState); }
	void ActivateSystem(bool bFlagAsJustAttached) { NativeCall<void, bool>(this, "UFXSystemComponent.ActivateSystem(bool)", bFlagAsJustAttached); }
	unsigned int GetApproxMemoryUsage() { return NativeCall<unsigned int>(this, "UFXSystemComponent.GetApproxMemoryUsage()"); }
	UFXSystemAsset* GetFXSystemAsset() { return NativeCall<UFXSystemAsset*>(this, "UFXSystemComponent.GetFXSystemAsset()"); }
	static bool RequiresLWCTileRecache(UE::Math::TVector<float>* CurrentTile, UE::Math::TVector<double>* CurrentLocation) { if (!CurrentTile) throw std::invalid_argument("Null native value parameter"); if (!CurrentLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < float >, UE :: Math :: TVector < double >>(nullptr, "UFXSystemComponent.RequiresLWCTileRecache(UE::Math::TVector<float>,UE::Math::TVector<double>)", *CurrentTile, *CurrentLocation); }
	void SetActorParameter(FName ParameterName, AActor* Param) { NativeCall<void, FName, AActor*>(this, "UFXSystemComponent.SetActorParameter(FName,AActor*)", ParameterName, Param); }
	void SetIntParameter(FName ParameterName, int Param) { NativeCall<void, FName, int>(this, "UFXSystemComponent.SetIntParameter(FName,int)", ParameterName, Param); }
	void SetFXSystemAsset(UFXSystemAsset* Asset) { NativeCall<void, UFXSystemAsset*>(this, "UFXSystemComponent.SetFXSystemAsset(UFXSystemAsset*)", Asset); }
	void ReleaseToPool() { NativeCall<void>(this, "UFXSystemComponent.ReleaseToPool()"); }
};
