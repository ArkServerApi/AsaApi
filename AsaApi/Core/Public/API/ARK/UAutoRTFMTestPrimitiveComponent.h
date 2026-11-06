#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UAutoRTFMTestPrimitiveComponent : public UPrimitiveComponent
{
public:
	UAutoRTFMTestPrimitiveComponent() = delete;
	~UAutoRTFMTestPrimitiveComponent() = delete;
	UAutoRTFMTestPrimitiveComponent(const UAutoRTFMTestPrimitiveComponent&) = delete;
	UAutoRTFMTestPrimitiveComponent& operator=(const UAutoRTFMTestPrimitiveComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAutoRTFMTestPrimitiveComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAutoRTFMTestPrimitiveComponent"); }

	int& ValueField() { return *GetNativePointerField<int*>(this, "UAutoRTFMTestPrimitiveComponent.Value"); }
	UBodySetup*& BodySetupField() { return *GetNativePointerField<UBodySetup**>(this, "UAutoRTFMTestPrimitiveComponent.BodySetup"); }
	UBodySetup* GetBodySetup() { return NativeCall<UBodySetup*>(this, "UAutoRTFMTestPrimitiveComponent.GetBodySetup()"); }
};
