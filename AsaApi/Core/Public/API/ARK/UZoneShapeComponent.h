#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UZoneShapeComponent : public UPrimitiveComponent
{
public:
	UZoneShapeComponent() = delete;
	~UZoneShapeComponent() = delete;
	UZoneShapeComponent(const UZoneShapeComponent&) = delete;
	UZoneShapeComponent& operator=(const UZoneShapeComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UZoneShapeComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UZoneShapeComponent"); }

	FZoneLaneProfileRef& LaneProfileField() { return *GetNativePointerField<FZoneLaneProfileRef*>(this, "UZoneShapeComponent.LaneProfile"); }
	bool& bReverseLaneProfileField() { return *GetNativePointerField<bool*>(this, "UZoneShapeComponent.bReverseLaneProfile"); }
	FZoneGraphTagMask& TagsField() { return *GetNativePointerField<FZoneGraphTagMask*>(this, "UZoneShapeComponent.Tags"); }
	void UpdateMatingConnectedShapes() { NativeCall<void>(this, "UZoneShapeComponent.UpdateMatingConnectedShapes()"); }
	void GetSplineLaneProfile(FZoneLaneProfile& OutLaneProfile) { NativeCall<void, FZoneLaneProfile&>(this, "UZoneShapeComponent.GetSplineLaneProfile(FZoneLaneProfile&)", OutLaneProfile); }
	void UpdatePointRotationAndTangent(int PointIndex) { NativeCall<void, int>(this, "UZoneShapeComponent.UpdatePointRotationAndTangent(int)", PointIndex); }
	void OnRegister() { NativeCall<void>(this, "UZoneShapeComponent.OnRegister()"); }
	void UpdateShape() { NativeCall<void>(this, "UZoneShapeComponent.UpdateShape()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UZoneShapeComponent.Serialize(FArchive&)", Ar); }
	void PostLoad() { NativeCall<void>(this, "UZoneShapeComponent.PostLoad()"); }
	bool IsEditorOnly() { return NativeCall<bool>(this, "UZoneShapeComponent.IsEditorOnly()"); }
	void OnUnregister() { NativeCall<void>(this, "UZoneShapeComponent.OnUnregister()"); }
	void UpdateShapeConnectors() { NativeCall<void>(this, "UZoneShapeComponent.UpdateShapeConnectors()"); }
	void CompactPerPointLaneProfiles() { NativeCall<void>(this, "UZoneShapeComponent.CompactPerPointLaneProfiles()"); }
};
