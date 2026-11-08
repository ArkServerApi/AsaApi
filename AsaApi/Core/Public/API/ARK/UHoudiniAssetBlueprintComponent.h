#pragma once
#include "BulkForward.h"
#include "UHoudiniAssetComponent.h"

struct UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent
{
public:
	UHoudiniAssetBlueprintComponent() = delete;
	~UHoudiniAssetBlueprintComponent() = delete;
	UHoudiniAssetBlueprintComponent(const UHoudiniAssetBlueprintComponent&) = delete;
	UHoudiniAssetBlueprintComponent& operator=(const UHoudiniAssetBlueprintComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHoudiniAssetBlueprintComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHoudiniAssetBlueprintComponent"); }

	TWeakObjectPtr<UBlueprint, FWeakObjectPtr>& CachedBlueprintField() { return *GetNativePointerField<TWeakObjectPtr<UBlueprint, FWeakObjectPtr>*>(this, "UHoudiniAssetBlueprintComponent.CachedBlueprint"); }
	TWeakObjectPtr<AActor, FWeakObjectPtr>& CachedActorCDOField() { return *GetNativePointerField<TWeakObjectPtr<AActor, FWeakObjectPtr>*>(this, "UHoudiniAssetBlueprintComponent.CachedActorCDO"); }
	TWeakObjectPtr<UHoudiniAssetBlueprintComponent, FWeakObjectPtr>& CachedTemplateComponentField() { return *GetNativePointerField<TWeakObjectPtr<UHoudiniAssetBlueprintComponent, FWeakObjectPtr>*>(this, "UHoudiniAssetBlueprintComponent.CachedTemplateComponent"); }
	bool& FauxBPPropertyField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetBlueprintComponent.FauxBPProperty"); }
	bool& bHoudiniAssetChangedField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetBlueprintComponent.bHoudiniAssetChanged"); }
	bool& bUpdatedFromTemplateField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetBlueprintComponent.bUpdatedFromTemplate"); }
	bool& bIsInBlueprintEditorField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetBlueprintComponent.bIsInBlueprintEditor"); }
	bool& bCanDeleteHoudiniNodesField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetBlueprintComponent.bCanDeleteHoudiniNodes"); }
	bool& bHasRegisteredComponentTemplateField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetBlueprintComponent.bHasRegisteredComponentTemplate"); }
	FDelegateHandle& TemplatePropertiesChangedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UHoudiniAssetBlueprintComponent.TemplatePropertiesChangedHandle"); }
	void OnPostPreCook() { NativeCall<void>(this, "UHoudiniAssetBlueprintComponent.OnPostPreCook()"); }
	void OnPrePreInstantiation() { NativeCall<void>(this, "UHoudiniAssetBlueprintComponent.OnPrePreInstantiation()"); }
	void RegisterHoudiniComponent(UHoudiniAssetComponent* InComponent) { NativeCall<void, UHoudiniAssetComponent*>(this, "UHoudiniAssetBlueprintComponent.RegisterHoudiniComponent(UHoudiniAssetComponent*)", InComponent); }
	void OnBlueprintStructureModified() { NativeCall<void>(this, "UHoudiniAssetBlueprintComponent.OnBlueprintStructureModified()"); }
	void DestroyComponent(bool bPromoteChildren) { NativeCall<void, bool>(this, "UHoudiniAssetBlueprintComponent.DestroyComponent(bool)", bPromoteChildren); }
	bool CanDeleteHoudiniNodes() { return NativeCall<bool>(this, "UHoudiniAssetBlueprintComponent.CanDeleteHoudiniNodes()"); }
	bool IsProxyStaticMeshEnabled() { return NativeCall<bool>(this, "UHoudiniAssetBlueprintComponent.IsProxyStaticMeshEnabled()"); }
	void OnFullyLoaded() { NativeCall<void>(this, "UHoudiniAssetBlueprintComponent.OnFullyLoaded()"); }
	USceneComponent* FindActorComponentByName(AActor* InActor, FName ComponentName) { return NativeCall<USceneComponent*, AActor*, FName>(this, "UHoudiniAssetBlueprintComponent.FindActorComponentByName(AActor*,FName)", InActor, ComponentName); }
	void CacheBlueprintData() { NativeCall<void>(this, "UHoudiniAssetBlueprintComponent.CacheBlueprintData()"); }
	void OnBlueprintModified() { NativeCall<void>(this, "UHoudiniAssetBlueprintComponent.OnBlueprintModified()"); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UHoudiniAssetBlueprintComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	bool IsInputTypeSupported(EHoudiniInputType InType) { return NativeCall<bool, EHoudiniInputType>(this, "UHoudiniAssetBlueprintComponent.IsInputTypeSupported(EHoudiniInputType)", InType); }
	bool IsOutputTypeSupported(EHoudiniOutputType InType) { return NativeCall<bool, EHoudiniOutputType>(this, "UHoudiniAssetBlueprintComponent.IsOutputTypeSupported(EHoudiniOutputType)", InType); }
	void NotifyHoudiniPostUnregister() { NativeCall<void>(this, "UHoudiniAssetBlueprintComponent.NotifyHoudiniPostUnregister()"); }
	void NotifyHoudiniRegisterCompleted() { NativeCall<void>(this, "UHoudiniAssetBlueprintComponent.NotifyHoudiniRegisterCompleted()"); }
	void OnTemplateParametersChangedHandler(UHoudiniAssetComponent* InComponentTemplate) { NativeCall<void, UHoudiniAssetComponent*>(this, "UHoudiniAssetBlueprintComponent.OnTemplateParametersChangedHandler(UHoudiniAssetComponent*)", InComponentTemplate); }
	void NotifyHoudiniPreUnregister() { NativeCall<void>(this, "UHoudiniAssetBlueprintComponent.NotifyHoudiniPreUnregister()"); }
	bool IsValidComponent() { return NativeCall<bool>(this, "UHoudiniAssetBlueprintComponent.IsValidComponent()"); }
	USCS_Node* FindSCSNodeForTemplateComponentInClassHierarchy(const UActorComponent* InComponent) { return NativeCall<USCS_Node*, const UActorComponent*>(this, "UHoudiniAssetBlueprintComponent.FindSCSNodeForTemplateComponentInClassHierarchy(UActorComponent*)", InComponent); }
	UHoudiniAssetComponent* GetCachedTemplate() { return NativeCall<UHoudiniAssetComponent*>(this, "UHoudiniAssetBlueprintComponent.GetCachedTemplate()"); }
	void OnPreOutputProcessing() { NativeCall<void>(this, "UHoudiniAssetBlueprintComponent.OnPreOutputProcessing()"); }
	void OnPrePreCook() { NativeCall<void>(this, "UHoudiniAssetBlueprintComponent.OnPrePreCook()"); }
	void OnHoudiniAssetChanged() { NativeCall<void>(this, "UHoudiniAssetBlueprintComponent.OnHoudiniAssetChanged()"); }
	void HoudiniEngineTick() { NativeCall<void>(this, "UHoudiniAssetBlueprintComponent.HoudiniEngineTick()"); }
	void BeginDestroy() { NativeCall<void>(this, "UHoudiniAssetBlueprintComponent.BeginDestroy()"); }
	void OnRegister() { NativeCall<void>(this, "UHoudiniAssetBlueprintComponent.OnRegister()"); }
	void OnTemplateParametersChanged() { NativeCall<void>(this, "UHoudiniAssetBlueprintComponent.OnTemplateParametersChanged()"); }
	void OnPostOutputProcessing() { NativeCall<void>(this, "UHoudiniAssetBlueprintComponent.OnPostOutputProcessing()"); }
	void ApplyComponentInstanceData(FHoudiniAssetBlueprintInstanceData* InstanceData, bool bPostUCS) { NativeCall<void, FHoudiniAssetBlueprintInstanceData*, bool>(this, "UHoudiniAssetBlueprintComponent.ApplyComponentInstanceData(FHoudiniAssetBlueprintInstanceData*,bool)", InstanceData, bPostUCS); }
};
