#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ANavLinkProxy : public AActor
{
public:
	ANavLinkProxy() = delete;
	~ANavLinkProxy() = delete;
	ANavLinkProxy(const ANavLinkProxy&) = delete;
	ANavLinkProxy& operator=(const ANavLinkProxy&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ANavLinkProxy"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANavLinkProxy"); }

	bool& bSmartLinkIsRelevantField() { return *GetNativePointerField<bool*>(this, "ANavLinkProxy.bSmartLinkIsRelevant"); }
	FSmartLinkReachedSignature& OnSmartLinkReachedField() { return *GetNativePointerField<FSmartLinkReachedSignature*>(this, "ANavLinkProxy.OnSmartLinkReached"); }
	void PostLoad() { NativeCall<void>(this, "ANavLinkProxy.PostLoad()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "ANavLinkProxy.PostRegisterAllComponents()"); }
	void BeginDestroy() { NativeCall<void>(this, "ANavLinkProxy.BeginDestroy()"); }
	void NotifySmartLinkReached(UNavLinkCustomComponent* LinkComp, UObject* PathingAgent, const UE::Math::TVector<double>& DestPoint) { NativeCall<void, UNavLinkCustomComponent*, UObject*, const UE::Math::TVector<double>&>(this, "ANavLinkProxy.NotifySmartLinkReached(UNavLinkCustomComponent*,UObject*,UE::Math::TVector<double>&)", LinkComp, PathingAgent, DestPoint); }
	void GetNavigationData(FNavigationRelevantData& Data) { NativeCall<void, FNavigationRelevantData&>(this, "ANavLinkProxy.GetNavigationData(FNavigationRelevantData&)", Data); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ANavLinkProxy._getUObject()"); }
	void PostInitProperties() { NativeCall<void>(this, "ANavLinkProxy.PostInitProperties()"); }
	bool IsNavigationRelevant() { return NativeCall<bool>(this, "ANavLinkProxy.IsNavigationRelevant()"); }
};
