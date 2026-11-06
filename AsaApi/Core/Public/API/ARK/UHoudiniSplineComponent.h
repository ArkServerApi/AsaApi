#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UHoudiniSplineComponent : public USceneComponent
{
public:
	UHoudiniSplineComponent() = delete;
	~UHoudiniSplineComponent() = delete;
	UHoudiniSplineComponent(const UHoudiniSplineComponent&) = delete;
	UHoudiniSplineComponent& operator=(const UHoudiniSplineComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHoudiniSplineComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHoudiniSplineComponent"); }

	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& DisplayPointsField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "UHoudiniSplineComponent.DisplayPoints"); }
	TArray<int, TSizedDefaultAllocator<32> >& DisplayPointIndexDividerField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UHoudiniSplineComponent.DisplayPointIndexDivider"); }
	FString& HoudiniSplineNameField() { return *GetNativePointerField<FString*>(this, "UHoudiniSplineComponent.HoudiniSplineName"); }
	bool& bClosedField() { return *GetNativePointerField<bool*>(this, "UHoudiniSplineComponent.bClosed"); }
	bool& bReversedField() { return *GetNativePointerField<bool*>(this, "UHoudiniSplineComponent.bReversed"); }
	int& CurveOrderField() { return *GetNativePointerField<int*>(this, "UHoudiniSplineComponent.CurveOrder"); }
	bool& bIsHoudiniSplineVisibleField() { return *GetNativePointerField<bool*>(this, "UHoudiniSplineComponent.bIsHoudiniSplineVisible"); }
	bool& bIsOutputCurveField() { return *GetNativePointerField<bool*>(this, "UHoudiniSplineComponent.bIsOutputCurve"); }
	bool& bCookOnCurveChangedField() { return *GetNativePointerField<bool*>(this, "UHoudiniSplineComponent.bCookOnCurveChanged"); }
	bool& bIsLegacyInputCurveField() { return *GetNativePointerField<bool*>(this, "UHoudiniSplineComponent.bIsLegacyInputCurve"); }
	FHoudiniGeoPartObject& HoudiniGeoPartObjectField() { return *GetNativePointerField<FHoudiniGeoPartObject*>(this, "UHoudiniSplineComponent.HoudiniGeoPartObject"); }
	bool& bHasChangedField() { return *GetNativePointerField<bool*>(this, "UHoudiniSplineComponent.bHasChanged"); }
	bool& bNeedsToTriggerUpdateField() { return *GetNativePointerField<bool*>(this, "UHoudiniSplineComponent.bNeedsToTriggerUpdate"); }
	bool& bIsInputCurveField() { return *GetNativePointerField<bool*>(this, "UHoudiniSplineComponent.bIsInputCurve"); }
	bool& bIsEditableOutputCurveField() { return *GetNativePointerField<bool*>(this, "UHoudiniSplineComponent.bIsEditableOutputCurve"); }
	int& NodeIdField() { return *GetNativePointerField<int*>(this, "UHoudiniSplineComponent.NodeId"); }
	FString& PartNameField() { return *GetNativePointerField<FString*>(this, "UHoudiniSplineComponent.PartName"); }
	void OnUnregister() { NativeCall<void>(this, "UHoudiniSplineComponent.OnUnregister()"); }
	void CopyPropertiesFrom(UObject* FromObject) { NativeCall<void, UObject*>(this, "UHoudiniSplineComponent.CopyPropertiesFrom(UObject*)", FromObject); }
	void MarkChanged(const bool& Changed) { NativeCall<void, const bool&>(this, "UHoudiniSplineComponent.MarkChanged(bool&)", Changed); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UHoudiniSplineComponent.Serialize(FArchive&)", Ar); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UHoudiniSplineComponent._getUObject()"); }
	bool HasChanged() { return NativeCall<bool>(this, "UHoudiniSplineComponent.HasChanged()"); }
	void OnComponentCreated() { NativeCall<void>(this, "UHoudiniSplineComponent.OnComponentCreated()"); }
	bool NeedsToTriggerUpdate() { return NativeCall<bool>(this, "UHoudiniSplineComponent.NeedsToTriggerUpdate()"); }
	void PostLoad() { NativeCall<void>(this, "UHoudiniSplineComponent.PostLoad()"); }
	void SetNeedsToTriggerUpdate(const bool& NeedsToTriggerUpdate) { NativeCall<void, const bool&>(this, "UHoudiniSplineComponent.SetNeedsToTriggerUpdate(bool&)", NeedsToTriggerUpdate); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UHoudiniSplineComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
};
