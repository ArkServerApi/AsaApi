#pragma once
#include "BulkForward.h"
#include "UInputComponent.h"

struct UEnhancedInputComponent : public UInputComponent
{
public:
	UEnhancedInputComponent() = delete;
	~UEnhancedInputComponent() = delete;
	UEnhancedInputComponent(const UEnhancedInputComponent&) = delete;
	UEnhancedInputComponent& operator=(const UEnhancedInputComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UEnhancedInputComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UEnhancedInputComponent"); }

	bool& bShouldFireDelegatesInEditorField() { return *GetNativePointerField<bool*>(this, "UEnhancedInputComponent.bShouldFireDelegatesInEditor"); }
	bool& bShouldCheckForLegacyKeyConsumptionField() { return *GetNativePointerField<bool*>(this, "UEnhancedInputComponent.bShouldCheckForLegacyKeyConsumption"); }
	void ClearActionBindings() { NativeCall<void>(this, "UEnhancedInputComponent.ClearActionBindings()"); }
	bool HasBindings() { return NativeCall<bool>(this, "UEnhancedInputComponent.HasBindings()"); }
	void ClearBindingsForObject(UObject* InOwner) { NativeCall<void, UObject*>(this, "UEnhancedInputComponent.ClearBindingsForObject(UObject*)", InOwner); }
};
