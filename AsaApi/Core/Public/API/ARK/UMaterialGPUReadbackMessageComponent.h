#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UMaterialGPUReadbackMessageComponent : public UActorComponent
{
public:
	UMaterialGPUReadbackMessageComponent() = delete;
	~UMaterialGPUReadbackMessageComponent() = delete;
	UMaterialGPUReadbackMessageComponent(const UMaterialGPUReadbackMessageComponent&) = delete;
	UMaterialGPUReadbackMessageComponent& operator=(const UMaterialGPUReadbackMessageComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMaterialGPUReadbackMessageComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMaterialGPUReadbackMessageComponent"); }

	FName& MessageNameField() { return *GetNativePointerField<FName*>(this, "UMaterialGPUReadbackMessageComponent.MessageName"); }
	bool& bAutoEnableMessagesOnRegisterField() { return *GetNativePointerField<bool*>(this, "UMaterialGPUReadbackMessageComponent.bAutoEnableMessagesOnRegister"); }
	FDelegateHandle& MessageDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UMaterialGPUReadbackMessageComponent.MessageDelegateHandle"); }
	void OnUnregister() { NativeCall<void>(this, "UMaterialGPUReadbackMessageComponent.OnUnregister()"); }
	void OnRegister() { NativeCall<void>(this, "UMaterialGPUReadbackMessageComponent.OnRegister()"); }
	void RegisterMessages() { NativeCall<void>(this, "UMaterialGPUReadbackMessageComponent.RegisterMessages()"); }
};
