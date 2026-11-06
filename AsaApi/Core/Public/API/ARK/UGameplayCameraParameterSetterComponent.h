#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UGameplayCameraParameterSetterComponent : public UActorComponent
{
public:
	UGameplayCameraParameterSetterComponent() = delete;
	~UGameplayCameraParameterSetterComponent() = delete;
	UGameplayCameraParameterSetterComponent(const UGameplayCameraParameterSetterComponent&) = delete;
	UGameplayCameraParameterSetterComponent& operator=(const UGameplayCameraParameterSetterComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGameplayCameraParameterSetterComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGameplayCameraParameterSetterComponent"); }

	FCameraRigAssetReference& CameraRigReferenceField() { return *GetNativePointerField<FCameraRigAssetReference*>(this, "UGameplayCameraParameterSetterComponent.CameraRigReference"); }
	float& BlendInTimeField() { return *GetNativePointerField<float*>(this, "UGameplayCameraParameterSetterComponent.BlendInTime"); }
	float& BlendOutTimeField() { return *GetNativePointerField<float*>(this, "UGameplayCameraParameterSetterComponent.BlendOutTime"); }
	void StopParameterSetters(bool bImmediately) { NativeCall<void, bool>(this, "UGameplayCameraParameterSetterComponent.StopParameterSetters(bool)", bImmediately); }
	void BeginPlay() { NativeCall<void>(this, "UGameplayCameraParameterSetterComponent.BeginPlay()"); }
	void StartParameterSetters() { NativeCall<void>(this, "UGameplayCameraParameterSetterComponent.StartParameterSetters()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UGameplayCameraParameterSetterComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
};
