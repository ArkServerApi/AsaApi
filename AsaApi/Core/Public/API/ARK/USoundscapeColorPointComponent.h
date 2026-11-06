#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct USoundscapeColorPointComponent : public UActorComponent
{
public:
	USoundscapeColorPointComponent() = delete;
	~USoundscapeColorPointComponent() = delete;
	USoundscapeColorPointComponent(const USoundscapeColorPointComponent&) = delete;
	USoundscapeColorPointComponent& operator=(const USoundscapeColorPointComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USoundscapeColorPointComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USoundscapeColorPointComponent"); }

	FGameplayTag& ColorPointField() { return *GetNativePointerField<FGameplayTag*>(this, "USoundscapeColorPointComponent.ColorPoint"); }
	void BeginPlay() { NativeCall<void>(this, "USoundscapeColorPointComponent.BeginPlay()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "USoundscapeColorPointComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
};
