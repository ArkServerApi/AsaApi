#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class ULandscapeInfo : public UObject
{
public:
	ULandscapeInfo() = delete;
	~ULandscapeInfo() = delete;
	ULandscapeInfo(const ULandscapeInfo&) = delete;
	ULandscapeInfo& operator=(const ULandscapeInfo&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULandscapeInfo"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULandscapeInfo"); }
	FGuid& LandscapeGuidField() { return *GetNativePointerField<FGuid*>(this, "ULandscapeInfo.LandscapeGuid"); }
	int& ComponentSizeQuadsField() { return *GetNativePointerField<int*>(this, "ULandscapeInfo.ComponentSizeQuads"); }
	int& SubsectionSizeQuadsField() { return *GetNativePointerField<int*>(this, "ULandscapeInfo.SubsectionSizeQuads"); }
	int& ComponentNumSubsectionsField() { return *GetNativePointerField<int*>(this, "ULandscapeInfo.ComponentNumSubsections"); }
	void UnregisterCollisionComponent(ULandscapeHeightfieldCollisionComponent* Component) { NativeCall<void, ULandscapeHeightfieldCollisionComponent*>(this, "ULandscapeInfo.UnregisterCollisionComponent(ULandscapeHeightfieldCollisionComponent*)", Component); }
	void RegisterCollisionComponent(ULandscapeHeightfieldCollisionComponent* Component) { NativeCall<void, ULandscapeHeightfieldCollisionComponent*>(this, "ULandscapeInfo.RegisterCollisionComponent(ULandscapeHeightfieldCollisionComponent*)", Component); }
	void UnregisterActor(ALandscapeProxy* Proxy) { NativeCall<void, ALandscapeProxy*>(this, "ULandscapeInfo.UnregisterActor(ALandscapeProxy*)", Proxy); }
	static ULandscapeInfo* Find(UWorld* InWorld, const FGuid& LandscapeGuid) { return NativeCall<ULandscapeInfo*, UWorld*, const FGuid&>(nullptr, "ULandscapeInfo.Find(UWorld*,FGuid&)", InWorld, LandscapeGuid); }
	static int RemoveLandscapeInfo(UWorld* InWorld, const FGuid& LandscapeGuid) { return NativeCall<int, UWorld*, const FGuid&>(nullptr, "ULandscapeInfo.RemoveLandscapeInfo(UWorld*,FGuid&)", InWorld, LandscapeGuid); }
	void RegisterLandscapeActorWithProxyInternal(ALandscapeProxy* Proxy, bool bMapCheck) { NativeCall<void, ALandscapeProxy*, bool>(this, "ULandscapeInfo.RegisterLandscapeActorWithProxyInternal(ALandscapeProxy*,bool)", Proxy, bMapCheck); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ULandscapeInfo.Serialize(FArchive&)", Ar); }
	void UnregisterActorComponent(ULandscapeComponent* Component) { NativeCall<void, ULandscapeComponent*>(this, "ULandscapeInfo.UnregisterActorComponent(ULandscapeComponent*)", Component); }
	ALandscapeProxy* GetLandscapeProxy() { return NativeCall<ALandscapeProxy*>(this, "ULandscapeInfo.GetLandscapeProxy()"); }
	void RegisterActorComponent(ULandscapeComponent* Component, bool bMapCheck) { NativeCall<void, ULandscapeComponent*, bool>(this, "ULandscapeInfo.RegisterActorComponent(ULandscapeComponent*,bool)", Component, bMapCheck); }
	void RegisterActor(ALandscapeProxy* Proxy, bool bMapCheck, bool bUpdateAllAddCollisions) { NativeCall<void, ALandscapeProxy*, bool, bool>(this, "ULandscapeInfo.RegisterActor(ALandscapeProxy*,bool,bool)", Proxy, bMapCheck, bUpdateAllAddCollisions); }
};
