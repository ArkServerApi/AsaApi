#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UPCGExClusterSketchComponent : public UPrimitiveComponent
{
public:
	UPCGExClusterSketchComponent() = delete;
	~UPCGExClusterSketchComponent() = delete;
	UPCGExClusterSketchComponent(const UPCGExClusterSketchComponent&) = delete;
	UPCGExClusterSketchComponent& operator=(const UPCGExClusterSketchComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPCGExClusterSketchComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPCGExClusterSketchComponent"); }

	bool& bShowSketchField() { return *GetNativePointerField<bool*>(this, "UPCGExClusterSketchComponent.bShowSketch"); }
	bool& bShowBasisField() { return *GetNativePointerField<bool*>(this, "UPCGExClusterSketchComponent.bShowBasis"); }
	bool& bOverrideColorsField() { return *GetNativePointerField<bool*>(this, "UPCGExClusterSketchComponent.bOverrideColors"); }
	FLinearColor& VertexColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPCGExClusterSketchComponent.VertexColor"); }
	FLinearColor& EdgeColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPCGExClusterSketchComponent.EdgeColor"); }
	void PostLoad() { NativeCall<void>(this, "UPCGExClusterSketchComponent.PostLoad()"); }
	void OnUnregister() { NativeCall<void>(this, "UPCGExClusterSketchComponent.OnUnregister()"); }
	const FPCGExClusterSketchModel& GetModel() { return NativeCall<const FPCGExClusterSketchModel&>(this, "UPCGExClusterSketchComponent.GetModel()"); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UPCGExClusterSketchComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	void OnRegister() { NativeCall<void>(this, "UPCGExClusterSketchComponent.OnRegister()"); }
};
