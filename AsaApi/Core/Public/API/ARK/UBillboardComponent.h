#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UBillboardComponent : public UPrimitiveComponent
{
public:
	UBillboardComponent() = delete;
	~UBillboardComponent() = delete;
	UBillboardComponent(const UBillboardComponent&) = delete;
	UBillboardComponent& operator=(const UBillboardComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBillboardComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBillboardComponent"); }

	float& ScreenSizeField() { return *GetNativePointerField<float*>(this, "UBillboardComponent.ScreenSize"); }
	float& UField() { return *GetNativePointerField<float*>(this, "UBillboardComponent.U"); }
	float& ULField() { return *GetNativePointerField<float*>(this, "UBillboardComponent.UL"); }
	float& VField() { return *GetNativePointerField<float*>(this, "UBillboardComponent.V"); }
	float& VLField() { return *GetNativePointerField<float*>(this, "UBillboardComponent.VL"); }
	float& OpacityMaskRefValField() { return *GetNativePointerField<float*>(this, "UBillboardComponent.OpacityMaskRefVal"); }
	BitFieldValue<bool, unsigned __int32> bIsScreenSizeScaled() { return { this, "UBillboardComponent.bIsScreenSizeScaled"}; }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UBillboardComponent.CreateSceneProxy()"); }
	bool IsShown(const FEngineShowFlags& ShowFlags) { return NativeCall<bool, const FEngineShowFlags&>(this, "UBillboardComponent.IsShown(FEngineShowFlags&)", ShowFlags); }
	void SetSpriteAndUV(UTexture2D* NewSprite, int NewU, int NewUL, int NewV, int NewVL) { NativeCall<void, UTexture2D*, int, int, int, int>(this, "UBillboardComponent.SetSpriteAndUV(UTexture2D*,int,int,int,int)", NewSprite, NewU, NewUL, NewV, NewVL); }
	void SetSprite(UTexture2D* NewSprite) { NativeCall<void, UTexture2D*>(this, "UBillboardComponent.SetSprite(UTexture2D*)", NewSprite); }
	void SetUV(int NewU, int NewUL, int NewV, int NewVL) { NativeCall<void, int, int, int, int>(this, "UBillboardComponent.SetUV(int,int,int,int)", NewU, NewUL, NewV, NewVL); }
};
