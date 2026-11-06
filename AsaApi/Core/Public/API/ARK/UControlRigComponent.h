#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UControlRigComponent : public UPrimitiveComponent
{
public:
	UControlRigComponent() = delete;
	~UControlRigComponent() = delete;
	UControlRigComponent(const UControlRigComponent&) = delete;
	UControlRigComponent& operator=(const UControlRigComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UControlRigComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UControlRigComponent"); }

	FControlRigAssetStrongReference& ControlRigAssetReferenceField() { return *GetNativePointerField<FControlRigAssetStrongReference*>(this, "UControlRigComponent.ControlRigAssetReference"); }
	FControlRigComponentDelegate& OnPreInitializeDelegateField() { return *GetNativePointerField<FControlRigComponentDelegate*>(this, "UControlRigComponent.OnPreInitializeDelegate"); }
	FControlRigComponentDelegate& OnPostInitializeDelegateField() { return *GetNativePointerField<FControlRigComponentDelegate*>(this, "UControlRigComponent.OnPostInitializeDelegate"); }
	FControlRigComponentDelegate& OnPreConstructionDelegateField() { return *GetNativePointerField<FControlRigComponentDelegate*>(this, "UControlRigComponent.OnPreConstructionDelegate"); }
	FControlRigComponentDelegate& OnPostConstructionDelegateField() { return *GetNativePointerField<FControlRigComponentDelegate*>(this, "UControlRigComponent.OnPostConstructionDelegate"); }
	FControlRigComponentDelegate& OnPreForwardsSolveDelegateField() { return *GetNativePointerField<FControlRigComponentDelegate*>(this, "UControlRigComponent.OnPreForwardsSolveDelegate"); }
	FControlRigComponentDelegate& OnPostForwardsSolveDelegateField() { return *GetNativePointerField<FControlRigComponentDelegate*>(this, "UControlRigComponent.OnPostForwardsSolveDelegate"); }
	bool& bEnableLazyEvaluationField() { return *GetNativePointerField<bool*>(this, "UControlRigComponent.bEnableLazyEvaluation"); }
	float& LazyEvaluationPositionThresholdField() { return *GetNativePointerField<float*>(this, "UControlRigComponent.LazyEvaluationPositionThreshold"); }
	float& LazyEvaluationRotationThresholdField() { return *GetNativePointerField<float*>(this, "UControlRigComponent.LazyEvaluationRotationThreshold"); }
	float& LazyEvaluationScaleThresholdField() { return *GetNativePointerField<float*>(this, "UControlRigComponent.LazyEvaluationScaleThreshold"); }
	bool& bResetTransformBeforeTickField() { return *GetNativePointerField<bool*>(this, "UControlRigComponent.bResetTransformBeforeTick"); }
	bool& bResetInitialsBeforeConstructionField() { return *GetNativePointerField<bool*>(this, "UControlRigComponent.bResetInitialsBeforeConstruction"); }
	bool& bUpdateRigOnTickField() { return *GetNativePointerField<bool*>(this, "UControlRigComponent.bUpdateRigOnTick"); }
	bool& bUpdateInEditorField() { return *GetNativePointerField<bool*>(this, "UControlRigComponent.bUpdateInEditor"); }
	bool& bDrawBonesField() { return *GetNativePointerField<bool*>(this, "UControlRigComponent.bDrawBones"); }
	bool& bShowDebugDrawingField() { return *GetNativePointerField<bool*>(this, "UControlRigComponent.bShowDebugDrawing"); }
	bool& bIsInsideInitializeBracketField() { return *GetNativePointerField<bool*>(this, "UControlRigComponent.bIsInsideInitializeBracket"); }
	bool& bNeedsEvaluationField() { return *GetNativePointerField<bool*>(this, "UControlRigComponent.bNeedsEvaluation"); }
	TArray<int, TSizedDefaultAllocator<32> >& InputElementIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UControlRigComponent.InputElementIndices"); }
	bool& bNeedToInitializeField() { return *GetNativePointerField<bool*>(this, "UControlRigComponent.bNeedToInitialize"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UControlRigComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UControlRigComponent.CreateSceneProxy()"); }
	void HandleControlRigPostForwardsSolveEvent(UControlRig* InControlRig, const FName& InEventName) { NativeCall<void, UControlRig*, const FName&>(this, "UControlRigComponent.HandleControlRigPostForwardsSolveEvent(UControlRig*,FName&)", InControlRig, InEventName); }
	void OnPreForwardsSolve_Implementation(UControlRigComponent* Component) { NativeCall<void, UControlRigComponent*>(this, "UControlRigComponent.OnPreForwardsSolve_Implementation(UControlRigComponent*)", Component); }
	void OnRegister() { NativeCall<void>(this, "UControlRigComponent.OnRegister()"); }
	UControlRig* SetupControlRigIfRequired() { return NativeCall<UControlRig*>(this, "UControlRigComponent.SetupControlRigIfRequired()"); }
	void Initialize() { NativeCall<void>(this, "UControlRigComponent.Initialize()"); }
	void HandleControlRigPreForwardsSolveEvent(UControlRig* InControlRig, const FName& InEventName) { NativeCall<void, UControlRig*, const FName&>(this, "UControlRigComponent.HandleControlRigPreForwardsSolveEvent(UControlRig*,FName&)", InControlRig, InEventName); }
	void ClearMappedElements() { NativeCall<void>(this, "UControlRigComponent.ClearMappedElements()"); }
	void BeginDestroy() { NativeCall<void>(this, "UControlRigComponent.BeginDestroy()"); }
	static bool HasTickDependency(const UObject* InDependent, const UObject* InDependency, FString* OutErrorMessage) { return NativeCall<bool, const UObject*, const UObject*, FString*>(nullptr, "UControlRigComponent.HasTickDependency(UObject*,UObject*,FString*)", InDependent, InDependency, OutErrorMessage); }
	void SetControlRig(UControlRig* InControlRig) { NativeCall<void, UControlRig*>(this, "UControlRigComponent.SetControlRig(UControlRig*)", InControlRig); }
	static FName GetComponentNameWithinActor(UActorComponent* InComponent) { return NativeCall<FName, UActorComponent*>(nullptr, "UControlRigComponent.GetComponentNameWithinActor(UActorComponent*)", InComponent); }
	UE::Math::TTransform<double>* GetControlTransform(UE::Math::TTransform<double>* result, FName ControlName, EControlRigComponentSpace Space) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, FName, EControlRigComponentSpace>(this, "UControlRigComponent.GetControlTransform(FName,EControlRigComponentSpace)", result, ControlName, Space); }
	void OnPreInitialize_Implementation(UControlRigComponent* Component) { NativeCall<void, UControlRigComponent*>(this, "UControlRigComponent.OnPreInitialize_Implementation(UControlRigComponent*)", Component); }
	void TransferOutputs() { NativeCall<void>(this, "UControlRigComponent.TransferOutputs()"); }
	void HandleControlRigPreConstructionEvent(UControlRig* InControlRig, const FName& InEventName) { NativeCall<void, UControlRig*, const FName&>(this, "UControlRigComponent.HandleControlRigPreConstructionEvent(UControlRig*,FName&)", InControlRig, InEventName); }
	void OnPreConstruction_Implementation(UControlRigComponent* Component) { NativeCall<void, UControlRigComponent*>(this, "UControlRigComponent.OnPreConstruction_Implementation(UControlRigComponent*)", Component); }
	void Update(float DeltaTime) { NativeCall<void, float>(this, "UControlRigComponent.Update(float)", DeltaTime); }
	static bool AllowsTickDependency(const UObject* InDependent, const UObject* InDependency, FString* OutErrorMessage) { return NativeCall<bool, const UObject*, const UObject*, FString*>(nullptr, "UControlRigComponent.AllowsTickDependency(UObject*,UObject*,FString*)", InDependent, InDependency, OutErrorMessage); }
	void ValidateMappingData() { NativeCall<void>(this, "UControlRigComponent.ValidateMappingData()"); }
	void HandleControlRigExecutedEvent(URigVMHost* InControlRig, const FName& InEventName) { NativeCall<void, URigVMHost*, const FName&>(this, "UControlRigComponent.HandleControlRigExecutedEvent(URigVMHost*,FName&)", InControlRig, InEventName); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UControlRigComponent.Serialize(FArchive&)", Ar); }
	void OnPostConstruction_Implementation(UControlRigComponent* Component) { NativeCall<void, UControlRigComponent*>(this, "UControlRigComponent.OnPostConstruction_Implementation(UControlRigComponent*)", Component); }
	UControlRig* GetControlRig() { return NativeCall<UControlRig*>(this, "UControlRigComponent.GetControlRig()"); }
	void OnPostInitialize_Implementation(UControlRigComponent* Component) { NativeCall<void, UControlRigComponent*>(this, "UControlRigComponent.OnPostInitialize_Implementation(UControlRigComponent*)", Component); }
	void OnPostForwardsSolve_Implementation(UControlRigComponent* Component) { NativeCall<void, UControlRigComponent*>(this, "UControlRigComponent.OnPostForwardsSolve_Implementation(UControlRigComponent*)", Component); }
	void TransferInputs() { NativeCall<void>(this, "UControlRigComponent.TransferInputs()"); }
	void OnUnregister() { NativeCall<void>(this, "UControlRigComponent.OnUnregister()"); }
	void HandleControlRigInitializedEvent(URigVMHost* InControlRig, const FName& InEventName) { NativeCall<void, URigVMHost*, const FName&>(this, "UControlRigComponent.HandleControlRigInitializedEvent(URigVMHost*,FName&)", InControlRig, InEventName); }
	void HandleControlRigPostConstructionEvent(UControlRig* InControlRig, const FName& InEventName) { NativeCall<void, UControlRig*, const FName&>(this, "UControlRigComponent.HandleControlRigPostConstructionEvent(UControlRig*,FName&)", InControlRig, InEventName); }
};
