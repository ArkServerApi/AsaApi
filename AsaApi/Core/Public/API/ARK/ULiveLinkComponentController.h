#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct ULiveLinkComponentController : public UActorComponent
{
public:
	ULiveLinkComponentController() = delete;
	~ULiveLinkComponentController() = delete;
	ULiveLinkComponentController(const ULiveLinkComponentController&) = delete;
	ULiveLinkComponentController& operator=(const ULiveLinkComponentController&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULiveLinkComponentController"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULiveLinkComponentController"); }

	FLiveLinkSubjectRepresentation& SubjectRepresentationField() { return *GetNativePointerField<FLiveLinkSubjectRepresentation*>(this, "ULiveLinkComponentController.SubjectRepresentation"); }
	bool& bUpdateInEditorField() { return *GetNativePointerField<bool*>(this, "ULiveLinkComponentController.bUpdateInEditor"); }
	FLiveLinkTickDelegate& OnLiveLinkUpdatedField() { return *GetNativePointerField<FLiveLinkTickDelegate*>(this, "ULiveLinkComponentController.OnLiveLinkUpdated"); }
	FOnControllerMapUpdatedDelegate& OnControllerMapUpdatedDelegateField() { return *GetNativePointerField<FOnControllerMapUpdatedDelegate*>(this, "ULiveLinkComponentController.OnControllerMapUpdatedDelegate"); }
	bool& bDisableEvaluateLiveLinkWhenSpawnableField() { return *GetNativePointerField<bool*>(this, "ULiveLinkComponentController.bDisableEvaluateLiveLinkWhenSpawnable"); }
	bool& bEvaluateLiveLinkField() { return *GetNativePointerField<bool*>(this, "ULiveLinkComponentController.bEvaluateLiveLink"); }
	bool& bUpdateInPreviewEditorField() { return *GetNativePointerField<bool*>(this, "ULiveLinkComponentController.bUpdateInPreviewEditor"); }
	bool& bIsDirtyField() { return *GetNativePointerField<bool*>(this, "ULiveLinkComponentController.bIsDirty"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "ULiveLinkComponentController.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void OnSubjectRoleChanged() { NativeCall<void>(this, "ULiveLinkComponentController.OnSubjectRoleChanged()"); }
	void DestroyComponent(bool bPromoteChildren) { NativeCall<void, bool>(this, "ULiveLinkComponentController.DestroyComponent(bool)", bPromoteChildren); }
	void PostLoad() { NativeCall<void>(this, "ULiveLinkComponentController.PostLoad()"); }
	void OnRegister() { NativeCall<void>(this, "ULiveLinkComponentController.OnRegister()"); }
	void CleanupControllersInMap() { NativeCall<void>(this, "ULiveLinkComponentController.CleanupControllersInMap()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ULiveLinkComponentController.Serialize(FArchive&)", Ar); }
};
