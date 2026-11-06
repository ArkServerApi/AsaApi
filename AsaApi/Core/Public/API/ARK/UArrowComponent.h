#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UArrowComponent : public UPrimitiveComponent
{
public:
	UArrowComponent() = delete;
	~UArrowComponent() = delete;
	UArrowComponent(const UArrowComponent&) = delete;
	UArrowComponent& operator=(const UArrowComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UArrowComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UArrowComponent"); }

	FColor& ArrowColorField() { return *GetNativePointerField<FColor*>(this, "UArrowComponent.ArrowColor"); }
	float& ArrowSizeField() { return *GetNativePointerField<float*>(this, "UArrowComponent.ArrowSize"); }
	float& ArrowLengthField() { return *GetNativePointerField<float*>(this, "UArrowComponent.ArrowLength"); }
	float& ScreenSizeField() { return *GetNativePointerField<float*>(this, "UArrowComponent.ScreenSize"); }
	BitFieldValue<bool, unsigned char> bIsScreenSizeScaled() { return { this, "UArrowComponent.bIsScreenSizeScaled"}; }
	BitFieldValue<bool, unsigned char> bTreatAsASprite() { return { this, "UArrowComponent.bTreatAsASprite"}; }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UArrowComponent.CreateSceneProxy()"); }
};
