#pragma once
#include "BulkForward.h"


struct UShapeComponent : UPrimitiveComponent
{
	// Fields

	//TObjectPtr<UBodySetup>& ShapeBodySetupField() { return *GetNativePointerField<TObjectPtr<UBodySetup>*>(this, "UShapeComponent.ShapeBodySetup"); }
	FColor& ShapeColorField() { return *GetNativePointerField<FColor*>(this, "UShapeComponent.ShapeColor"); }
	//TSubclassOf<UNavAreaBase>& AreaClassOverrideField() { return *GetNativePointerField<TSubclassOf<UNavAreaBase>*>(this, "UShapeComponent.AreaClassOverride"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bDrawOnlyIfSelectedField() { return { this, "UShapeComponent.bDrawOnlyIfSelected" }; }
	BitFieldValue<bool, unsigned __int32> bShouldCollideWhenPlacingField() { return { this, "UShapeComponent.bShouldCollideWhenPlacing" }; }
	BitFieldValue<bool, unsigned __int32> bDynamicObstacleField() { return { this, "UShapeComponent.bDynamicObstacle" }; }
	BitFieldValue<bool, unsigned __int32> bUseSystemDefaultObstacleAreaClassField() { return { this, "UShapeComponent.bUseSystemDefaultObstacleAreaClass" }; }
	BitFieldValue<bool, unsigned __int32> bUseArchetypeBodySetupField() { return { this, "UShapeComponent.bUseArchetypeBodySetup" }; }

	// Functions

	//bool DoCustomNavigableGeometryExport(FNavigableGeometryExport* GeomExport) const { return NativeCall<bool, FNavigableGeometryExport*>(this, "UShapeComponent.DoCustomNavigableGeometryExport(FNavigableGeometryExport&)", GeomExport); }
	bool ShouldCollideWhenPlacing()const { return NativeCall<bool>(this, "UShapeComponent.ShouldCollideWhenPlacing()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUShapeComponent();
	//void CreateShapeBodySetupIfNeeded<FKSphylElem>() { NativeCall<void>(this, "UShapeComponent.CreateShapeBodySetupIfNeeded<FKSphylElem>()"); }
	void UpdateBodySetup() { NativeCall<void>(this, "UShapeComponent.UpdateBodySetup()"); }
	//void CreateShapeBodySetupIfNeeded<FKSphereElem>() { NativeCall<void>(this, "UShapeComponent.CreateShapeBodySetupIfNeeded<FKSphereElem>()"); }
	bool IsNavigationRelevant()const { return NativeCall<bool>(this, "UShapeComponent.IsNavigationRelevant()"); }
	//void CreateShapeBodySetupIfNeeded<FKBoxElem>() { NativeCall<void>(this, "UShapeComponent.CreateShapeBodySetupIfNeeded<FKBoxElem>()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShapeComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShapeComponent"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UShapeComponent.Serialize(FArchive&)", Ar); }
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UShapeComponent.Serialize(FStructuredArchiveRecord)", Record); }
	//void GetNavigationData(FNavigationRelevantData* Data) const { NativeCall<void, FNavigationRelevantData*>(this, "UShapeComponent.GetNavigationData(FNavigationRelevantData&)", Data); }
	//UE::Math::TBoxSphereBounds<double, double> CalcBounds(const UE::Math::TTransform<double>* LocalToWorld) const { return NativeCall<UE::Math::TBoxSphereBounds<double, double>, const UE::Math::TTransform<double>*>(this, "UShapeComponent.CalcBounds(UE::Math::TTransform<double>&)", LocalToWorld); }
	//UBodySetup* GetBodySetup() { return NativeCall<UBodySetup*>(this, "UShapeComponent.GetBodySetup()"); }
	//FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UShapeComponent.CreateSceneProxy()"); }

	float& LineThicknessField() { return *GetNativePointerField<float*>(this, "UShapeComponent.LineThickness"); }
	BitFieldValue<bool, unsigned char> bDrawOnlyIfSelected() { return { this, "UShapeComponent.bDrawOnlyIfSelected"}; }
	BitFieldValue<bool, unsigned char> bShouldCollideWhenPlacing() { return { this, "UShapeComponent.bShouldCollideWhenPlacing"}; }
	BitFieldValue<bool, unsigned char> bDynamicObstacle() { return { this, "UShapeComponent.bDynamicObstacle"}; }
	BitFieldValue<bool, unsigned char> bUseSystemDefaultObstacleAreaClass() { return { this, "UShapeComponent.bUseSystemDefaultObstacleAreaClass"}; }
	BitFieldValue<bool, unsigned char> bUseArchetypeBodySetup() { return { this, "UShapeComponent.bUseArchetypeBodySetup"}; }
	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport& GeomExport) { return NativeCall<bool, FNavigableGeometryExport&>(this, "UShapeComponent.DoCustomNavigableGeometryExport(FNavigableGeometryExport&)", GeomExport); }
	UBodySetup* GetBodySetup() { return NativeCall<UBodySetup*>(this, "UShapeComponent.GetBodySetup()"); }
	bool GetIgnoreBoundsForEditorFocus() { return NativeCall<bool>(this, "UShapeComponent.GetIgnoreBoundsForEditorFocus()"); }
	void GetNavigationData(FNavigationRelevantData& Data) { NativeCall<void, FNavigationRelevantData&>(this, "UShapeComponent.GetNavigationData(FNavigationRelevantData&)", Data); }
	void SetLineThickness(float Thickness) { NativeCall<void, float>(this, "UShapeComponent.SetLineThickness(float)", Thickness); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UShapeComponent.CreateSceneProxy()"); }
};