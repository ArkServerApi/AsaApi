#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AControlRigShapeActor : public AActor
{
public:
	AControlRigShapeActor() = delete;
	~AControlRigShapeActor() = delete;
	AControlRigShapeActor(const AControlRigShapeActor&) = delete;
	AControlRigShapeActor& operator=(const AControlRigShapeActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AControlRigShapeActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AControlRigShapeActor"); }

	unsigned int& ControlRigIndexField() { return *GetNativePointerField<unsigned int*>(this, "AControlRigShapeActor.ControlRigIndex"); }
	TWeakObjectPtr<UControlRig, FWeakObjectPtr>& ControlRigField() { return *GetNativePointerField<TWeakObjectPtr<UControlRig, FWeakObjectPtr>*>(this, "AControlRigShapeActor.ControlRig"); }
	FName& ControlNameField() { return *GetNativePointerField<FName*>(this, "AControlRigShapeActor.ControlName"); }
	FName& ShapeNameField() { return *GetNativePointerField<FName*>(this, "AControlRigShapeActor.ShapeName"); }
	FName& ColorParameterNameField() { return *GetNativePointerField<FName*>(this, "AControlRigShapeActor.ColorParameterName"); }
	FLinearColor& OverrideColorField() { return *GetNativePointerField<FLinearColor*>(this, "AControlRigShapeActor.OverrideColor"); }
	FCachedRigElement& CachedIndexField() { return *GetNativePointerField<FCachedRigElement*>(this, "AControlRigShapeActor.CachedIndex"); }
	FName& HoveredParameterNameField() { return *GetNativePointerField<FName*>(this, "AControlRigShapeActor.HoveredParameterName"); }
	FName& HoveredColorParameterNameField() { return *GetNativePointerField<FName*>(this, "AControlRigShapeActor.HoveredColorParameterName"); }
	FLinearColor& CurrentColorField() { return *GetNativePointerField<FLinearColor*>(this, "AControlRigShapeActor.CurrentColor"); }
	FLinearColor& HoveredColorField() { return *GetNativePointerField<FLinearColor*>(this, "AControlRigShapeActor.HoveredColor"); }
	BitFieldValue<bool, unsigned char> bSelected() { return { this, "AControlRigShapeActor.bSelected"}; }
	BitFieldValue<bool, unsigned char> bHovered() { return { this, "AControlRigShapeActor.bHovered"}; }
	BitFieldValue<bool, unsigned char> bSelectable() { return { this, "AControlRigShapeActor.bSelectable"}; }
	bool IsEnabled() { return NativeCall<bool>(this, "AControlRigShapeActor.IsEnabled()"); }
	void SetEnabled(bool bInEnabled) { NativeCall<void, bool>(this, "AControlRigShapeActor.SetEnabled(bool)", bInEnabled); }
	void SetHovered(bool bInHovered) { NativeCall<void, bool>(this, "AControlRigShapeActor.SetHovered(bool)", bInHovered); }
	void SetSelected(bool bInSelected) { NativeCall<void, bool>(this, "AControlRigShapeActor.SetSelected(bool)", bInSelected); }
	void TickControl() { NativeCall<void>(this, "AControlRigShapeActor.TickControl()"); }
	void SetSelectable(bool bInSelectable) { NativeCall<void, bool>(this, "AControlRigShapeActor.SetSelectable(bool)", bInSelectable); }
	bool IsHovered() { return NativeCall<bool>(this, "AControlRigShapeActor.IsHovered()"); }
	void SetHoveredColor(const FLinearColor& InColor, bool bForce) { NativeCall<void, const FLinearColor&, bool>(this, "AControlRigShapeActor.SetHoveredColor(FLinearColor&,bool)", InColor, bForce); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AControlRigShapeActor._getUObject()"); }
	void SetShapeColor(const FLinearColor& InColor, bool bForce) { NativeCall<void, const FLinearColor&, bool>(this, "AControlRigShapeActor.SetShapeColor(FLinearColor&,bool)", InColor, bForce); }
	bool IsSelectable() { return NativeCall<bool>(this, "AControlRigShapeActor.IsSelectable()"); }
	UMaterialInstanceDynamic* GetProxyMaterial() { return NativeCall<UMaterialInstanceDynamic*>(this, "AControlRigShapeActor.GetProxyMaterial()"); }
	bool IsSelectedInEditor() { return NativeCall<bool>(this, "AControlRigShapeActor.IsSelectedInEditor()"); }
};
