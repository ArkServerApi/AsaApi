#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UEnvelopeFollowerListener : public UActorComponent
{
public:
	UEnvelopeFollowerListener() = delete;
	~UEnvelopeFollowerListener() = delete;
	UEnvelopeFollowerListener(const UEnvelopeFollowerListener&) = delete;
	UEnvelopeFollowerListener& operator=(const UEnvelopeFollowerListener&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UEnvelopeFollowerListener"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UEnvelopeFollowerListener"); }

	FOnEnvelopeFollowerUpdate& OnEnvelopeFollowerUpdateField() { return *GetNativePointerField<FOnEnvelopeFollowerUpdate*>(this, "UEnvelopeFollowerListener.OnEnvelopeFollowerUpdate"); }
	bool& bRegisteredField() { return *GetNativePointerField<bool*>(this, "UEnvelopeFollowerListener.bRegistered"); }
	unsigned int& PresetUniqueIdField() { return *GetNativePointerField<unsigned int*>(this, "UEnvelopeFollowerListener.PresetUniqueId"); }
	IEnvelopeFollowerNotifier*& EnvelopeFollowerNotifierField() { return *GetNativePointerField<IEnvelopeFollowerNotifier**>(this, "UEnvelopeFollowerListener.EnvelopeFollowerNotifier"); }
};
