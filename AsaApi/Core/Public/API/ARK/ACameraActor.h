#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ACameraActor : public AActor
{
public:
	ACameraActor() = delete;
	~ACameraActor() = delete;
	ACameraActor(const ACameraActor&) = delete;
	ACameraActor& operator=(const ACameraActor&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ACameraActor"); }

	TEnumAsByte<EAutoReceiveInput::Type>& AutoActivateForPlayerField() { return *GetNativePointerField<TEnumAsByte<EAutoReceiveInput::Type>*>(this, "ACameraActor.AutoActivateForPlayer"); }
	TWeakObjectPtr<UCameraAnim, FWeakObjectPtr>& PreviewedCameraAnimField() { return *GetNativePointerField<TWeakObjectPtr<UCameraAnim, FWeakObjectPtr>*>(this, "ACameraActor.PreviewedCameraAnim"); }
	float& AspectRatio_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "ACameraActor.AspectRatio_DEPRECATED"); }
	float& FOVAngle_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "ACameraActor.FOVAngle_DEPRECATED"); }
	float& PostProcessBlendWeight_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "ACameraActor.PostProcessBlendWeight_DEPRECATED"); }
	FPostProcessSettings& PostProcessSettings_DEPRECATEDField() { return *GetNativePointerField<FPostProcessSettings*>(this, "ACameraActor.PostProcessSettings_DEPRECATED"); }
	BitFieldValue<bool, unsigned __int32> bConstrainAspectRatio_DEPRECATED() { return { this, "ACameraActor.bConstrainAspectRatio_DEPRECATED"}; }
	USceneComponent* GetDefaultAttachComponent() { return NativeCall<USceneComponent*>(this, "ACameraActor.GetDefaultAttachComponent()"); }
	void BeginPlay() { NativeCall<void>(this, "ACameraActor.BeginPlay()"); }
	void NotifyCameraCut() { NativeCall<void>(this, "ACameraActor.NotifyCameraCut()"); }
	int GetAutoActivatePlayerIndex() { return NativeCall<int>(this, "ACameraActor.GetAutoActivatePlayerIndex()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ACameraActor.Serialize(FArchive&)", Ar); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ACameraActor"); }
};
