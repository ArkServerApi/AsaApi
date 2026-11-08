#pragma once
#include "BulkForward.h"
#include "UShapeComponent.h"

struct UBoxComponent : public UShapeComponent
{
public:
	UBoxComponent() = delete;
	~UBoxComponent() = delete;
	UBoxComponent(const UBoxComponent&) = delete;
	UBoxComponent& operator=(const UBoxComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBoxComponent"); }

	UE::Math::TVector<double>& BoxExtentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UBoxComponent.BoxExtent"); }
	void UpdateBodySetup() { NativeCall<void>(this, "UBoxComponent.UpdateBodySetup()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBoxComponent"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UBoxComponent.CreateSceneProxy()"); }
	void SetBoxExtent(UE::Math::TVector<double>* NewBoxExtent, bool bUpdateOverlaps) { if (!NewBoxExtent) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, bool>(this, "UBoxComponent.SetBoxExtent(UE::Math::TVector<double>,bool)", *NewBoxExtent, bUpdateOverlaps); }
	bool IsZeroExtent() { return NativeCall<bool>(this, "UBoxComponent.IsZeroExtent()"); }
};
