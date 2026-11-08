#pragma once
#include "GameplayForward.h"
#include "UPrimalCharacterStatusComponent.h"

struct UPrimalPlayerStatusComponent : UPrimalCharacterStatusComponent
{
public:
	UPrimalPlayerStatusComponent() = delete;
	~UPrimalPlayerStatusComponent() = delete;
	UPrimalPlayerStatusComponent(const UPrimalPlayerStatusComponent&) = delete;
	UPrimalPlayerStatusComponent& operator=(const UPrimalPlayerStatusComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalPlayerStatusComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalPlayerStatusComponent"); }



	void InitializeComponent() { NativeCall<void>(this, "UPrimalPlayerStatusComponent.InitializeComponent()"); }
};
