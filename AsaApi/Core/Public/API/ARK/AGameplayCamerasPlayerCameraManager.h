#pragma once
#include "BulkForward.h"
#include "APlayerCameraManager.h"

struct AGameplayCamerasPlayerCameraManager : public APlayerCameraManager
{
public:
	AGameplayCamerasPlayerCameraManager() = delete;
	~AGameplayCamerasPlayerCameraManager() = delete;
	AGameplayCamerasPlayerCameraManager(const AGameplayCamerasPlayerCameraManager&) = delete;
	AGameplayCamerasPlayerCameraManager& operator=(const AGameplayCamerasPlayerCameraManager&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameplayCamerasPlayerCameraManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameplayCamerasPlayerCameraManager"); }

	bool& bOverrideViewRotationModeField() { return *GetNativePointerField<bool*>(this, "AGameplayCamerasPlayerCameraManager.bOverrideViewRotationMode"); }
	bool& bIsSettingNewViewTargetField() { return *GetNativePointerField<bool*>(this, "AGameplayCamerasPlayerCameraManager.bIsSettingNewViewTarget"); }
	void ProcessViewRotation(float DeltaTime, UE::Math::TRotator<double>& OutViewRotation, UE::Math::TRotator<double>& OutDeltaRot) { NativeCall<void, float, UE::Math::TRotator<double>&, UE::Math::TRotator<double>&>(this, "AGameplayCamerasPlayerCameraManager.ProcessViewRotation(float,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", DeltaTime, OutViewRotation, OutDeltaRot); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AGameplayCamerasPlayerCameraManager._getUObject()"); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "AGameplayCamerasPlayerCameraManager.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	void DoUpdateCamera(float DeltaTime) { NativeCall<void, float>(this, "AGameplayCamerasPlayerCameraManager.DoUpdateCamera(float)", DeltaTime); }
	void InitializeFor(APlayerController* PlayerController) { NativeCall<void, APlayerController*>(this, "AGameplayCamerasPlayerCameraManager.InitializeFor(APlayerController*)", PlayerController); }
	void OnContextStackChanged() { NativeCall<void>(this, "AGameplayCamerasPlayerCameraManager.OnContextStackChanged()"); }
	void BeginDestroy() { NativeCall<void>(this, "AGameplayCamerasPlayerCameraManager.BeginDestroy()"); }
	void EnsureNullContext() { NativeCall<void>(this, "AGameplayCamerasPlayerCameraManager.EnsureNullContext()"); }
	void DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos) { NativeCall<void, UCanvas*, const FDebugDisplayInfo&, float&, float&>(this, "AGameplayCamerasPlayerCameraManager.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", Canvas, DebugDisplay, YL, YPos); }
	UObject* GetAsObject() { return NativeCall<UObject*>(this, "AGameplayCamerasPlayerCameraManager.GetAsObject()"); }
};
