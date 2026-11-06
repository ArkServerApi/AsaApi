#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ATemplateSequenceActor : public AActor
{
public:
	ATemplateSequenceActor() = delete;
	~ATemplateSequenceActor() = delete;
	ATemplateSequenceActor(const ATemplateSequenceActor&) = delete;
	ATemplateSequenceActor& operator=(const ATemplateSequenceActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ATemplateSequenceActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ATemplateSequenceActor"); }

	FMovieSceneSequencePlaybackSettings& PlaybackSettingsField() { return *GetNativePointerField<FMovieSceneSequencePlaybackSettings*>(this, "ATemplateSequenceActor.PlaybackSettings"); }
	FSoftObjectPath& TemplateSequenceField() { return *GetNativePointerField<FSoftObjectPath*>(this, "ATemplateSequenceActor.TemplateSequence"); }
	FTemplateSequenceBindingOverrideData& BindingOverrideField() { return *GetNativePointerField<FTemplateSequenceBindingOverrideData*>(this, "ATemplateSequenceActor.BindingOverride"); }
	void PostLoad() { NativeCall<void>(this, "ATemplateSequenceActor.PostLoad()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "ATemplateSequenceActor.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	UObject* GetInstanceData() { return NativeCall<UObject*>(this, "ATemplateSequenceActor.GetInstanceData()"); }
	void InitializePlayer() { NativeCall<void>(this, "ATemplateSequenceActor.InitializePlayer()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ATemplateSequenceActor._getUObject()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "ATemplateSequenceActor.PostInitializeComponents()"); }
	UTemplateSequence* GetSequence() { return NativeCall<UTemplateSequence*>(this, "ATemplateSequenceActor.GetSequence()"); }
	void BeginPlay() { NativeCall<void>(this, "ATemplateSequenceActor.BeginPlay()"); }
	UTemplateSequence* LoadSequence() { return NativeCall<UTemplateSequence*>(this, "ATemplateSequenceActor.LoadSequence()"); }
	void PostInitProperties() { NativeCall<void>(this, "ATemplateSequenceActor.PostInitProperties()"); }
};
