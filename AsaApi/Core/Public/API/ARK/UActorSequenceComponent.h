#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UActorSequenceComponent : public UActorComponent
{
public:
	UActorSequenceComponent() = delete;
	~UActorSequenceComponent() = delete;
	UActorSequenceComponent(const UActorSequenceComponent&) = delete;
	UActorSequenceComponent& operator=(const UActorSequenceComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UActorSequenceComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UActorSequenceComponent"); }

	FMovieSceneSequencePlaybackSettings& PlaybackSettingsField() { return *GetNativePointerField<FMovieSceneSequencePlaybackSettings*>(this, "UActorSequenceComponent.PlaybackSettings"); }
	void PostInitProperties() { NativeCall<void>(this, "UActorSequenceComponent.PostInitProperties()"); }
	void BeginPlay() { NativeCall<void>(this, "UActorSequenceComponent.BeginPlay()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UActorSequenceComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void PostLoad() { NativeCall<void>(this, "UActorSequenceComponent.PostLoad()"); }
	void TickComponent(float DeltaSeconds, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UActorSequenceComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaSeconds, TickType, ThisTickFunction); }
};
