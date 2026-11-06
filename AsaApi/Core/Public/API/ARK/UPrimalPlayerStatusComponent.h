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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;



	void InitializeComponent() { NativeCall<void>(this, "UPrimalPlayerStatusComponent.InitializeComponent()"); }
};
