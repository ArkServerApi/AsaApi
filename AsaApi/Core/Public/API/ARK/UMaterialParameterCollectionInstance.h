#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UMaterialParameterCollectionInstance : public UObject
{
public:
	UMaterialParameterCollectionInstance() = delete;
	~UMaterialParameterCollectionInstance() = delete;
	UMaterialParameterCollectionInstance(const UMaterialParameterCollectionInstance&) = delete;
	UMaterialParameterCollectionInstance& operator=(const UMaterialParameterCollectionInstance&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMaterialParameterCollectionInstance"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMaterialParameterCollectionInstance"); }
	bool& bLoggedMissingParameterWarningField() { return *GetNativePointerField<bool*>(this, "UMaterialParameterCollectionInstance.bLoggedMissingParameterWarning"); }
	TWeakObjectPtr<UWorld, FWeakObjectPtr>& WorldField() { return *GetNativePointerField<TWeakObjectPtr<UWorld, FWeakObjectPtr>*>(this, "UMaterialParameterCollectionInstance.World"); }
	FMaterialParameterCollectionInstanceResource*& ResourceField() { return *GetNativePointerField<FMaterialParameterCollectionInstanceResource**>(this, "UMaterialParameterCollectionInstance.Resource"); }
	bool& bNeedsRenderStateUpdateField() { return *GetNativePointerField<bool*>(this, "UMaterialParameterCollectionInstance.bNeedsRenderStateUpdate"); }
	bool GetVectorParameterValue(const FCollectionVectorParameter& Parameter, FLinearColor& OutParameterValue) { return NativeCall<bool, const FCollectionVectorParameter&, FLinearColor&>(this, "UMaterialParameterCollectionInstance.GetVectorParameterValue(FCollectionVectorParameter&,FLinearColor&)", Parameter, OutParameterValue); }
	bool GetScalarParameterValue(FName ParameterName, float& OutParameterValue) { return NativeCall<bool, FName, float&>(this, "UMaterialParameterCollectionInstance.GetScalarParameterValue(FName,float&)", ParameterName, OutParameterValue); }
	bool GetVectorParameterValue(FName ParameterName, FLinearColor& OutParameterValue) { return NativeCall<bool, FName, FLinearColor&>(this, "UMaterialParameterCollectionInstance.GetVectorParameterValue(FName,FLinearColor&)", ParameterName, OutParameterValue); }
	void DeferredUpdateRenderState(bool bRecreateUniformBuffer) { NativeCall<void, bool>(this, "UMaterialParameterCollectionInstance.DeferredUpdateRenderState(bool)", bRecreateUniformBuffer); }
	void PostInitProperties() { NativeCall<void>(this, "UMaterialParameterCollectionInstance.PostInitProperties()"); }
	bool SetVectorParameterValue(FName ParameterName, const FLinearColor& ParameterValue) { return NativeCall<bool, FName, const FLinearColor&>(this, "UMaterialParameterCollectionInstance.SetVectorParameterValue(FName,FLinearColor&)", ParameterName, ParameterValue); }
	bool GetScalarParameterValue(const FCollectionScalarParameter& Parameter, float& OutParameterValue) { return NativeCall<bool, const FCollectionScalarParameter&, float&>(this, "UMaterialParameterCollectionInstance.GetScalarParameterValue(FCollectionScalarParameter&,float&)", Parameter, OutParameterValue); }
	void UpdateRenderState(bool bRecreateUniformBuffer) { NativeCall<void, bool>(this, "UMaterialParameterCollectionInstance.UpdateRenderState(bool)", bRecreateUniformBuffer); }
	bool SetScalarParameterValue(FName ParameterName, float ParameterValue) { return NativeCall<bool, FName, float>(this, "UMaterialParameterCollectionInstance.SetScalarParameterValue(FName,float)", ParameterName, ParameterValue); }
	void SetCollection(UMaterialParameterCollection* InCollection, UWorld* InWorld) { NativeCall<void, UMaterialParameterCollection*, UWorld*>(this, "UMaterialParameterCollectionInstance.SetCollection(UMaterialParameterCollection*,UWorld*)", InCollection, InWorld); }
	void FinishDestroy() { NativeCall<void>(this, "UMaterialParameterCollectionInstance.FinishDestroy()"); }
};
