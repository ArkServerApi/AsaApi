#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	UAIPerceptionStimuliSourceComponent() = delete;
	~UAIPerceptionStimuliSourceComponent() = delete;
	UAIPerceptionStimuliSourceComponent(const UAIPerceptionStimuliSourceComponent&) = delete;
	UAIPerceptionStimuliSourceComponent& operator=(const UAIPerceptionStimuliSourceComponent&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	BitFieldValue<bool, unsigned __int32> bAutoRegisterAsSource() { return { this, "UAIPerceptionStimuliSourceComponent.bAutoRegisterAsSource"}; }
	BitFieldValue<bool, unsigned __int32> bSuccessfullyRegistered() { return { this, "UAIPerceptionStimuliSourceComponent.bSuccessfullyRegistered"}; }
	void OnRegister() { NativeCall<void>(this, "UAIPerceptionStimuliSourceComponent.OnRegister()"); }
	void RegisterWithPerceptionSystem() { NativeCall<void>(this, "UAIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem()"); }
};
