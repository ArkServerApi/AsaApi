#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UHoudiniHandleComponent : public USceneComponent
{
public:
	UHoudiniHandleComponent() = delete;
	~UHoudiniHandleComponent() = delete;
	UHoudiniHandleComponent(const UHoudiniHandleComponent&) = delete;
	UHoudiniHandleComponent& operator=(const UHoudiniHandleComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHoudiniHandleComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHoudiniHandleComponent"); }

	bool& bNeedToUpdateTransformField() { return *GetNativePointerField<bool*>(this, "UHoudiniHandleComponent.bNeedToUpdateTransform"); }
	EHoudiniHandleType& HandleTypeField() { return *GetNativePointerField<EHoudiniHandleType*>(this, "UHoudiniHandleComponent.HandleType"); }
	FString& HandleNameField() { return *GetNativePointerField<FString*>(this, "UHoudiniHandleComponent.HandleName"); }
	double& dLastTransformUpdateTimeField() { return *GetNativePointerField<double*>(this, "UHoudiniHandleComponent.dLastTransformUpdateTime"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UHoudiniHandleComponent.Serialize(FArchive&)", Ar); }
};
