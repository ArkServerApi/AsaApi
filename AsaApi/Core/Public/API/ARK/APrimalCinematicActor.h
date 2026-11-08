#pragma once
#include "BulkForward.h"
#include "APostProcessVolume.h"

struct APrimalCinematicActor : public APostProcessVolume
{
public:
	APrimalCinematicActor() = delete;
	~APrimalCinematicActor() = delete;
	APrimalCinematicActor(const APrimalCinematicActor&) = delete;
	APrimalCinematicActor& operator=(const APrimalCinematicActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalCinematicActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalCinematicActor"); }

	UTextureRenderTarget2D*& RenderTargetField() { return *GetNativePointerField<UTextureRenderTarget2D**>(this, "APrimalCinematicActor.RenderTarget"); }
	float& TimeOffsetSecondsField() { return *GetNativePointerField<float*>(this, "APrimalCinematicActor.TimeOffsetSeconds"); }
	UBinkMediaPlayer*& MovieRefField() { return *GetNativePointerField<UBinkMediaPlayer**>(this, "APrimalCinematicActor.MovieRef"); }
	TWeakObjectPtr<ALevelSequenceActor, FWeakObjectPtr>& FetchedLevelSequenceField() { return *GetNativePointerField<TWeakObjectPtr<ALevelSequenceActor, FWeakObjectPtr>*>(this, "APrimalCinematicActor.FetchedLevelSequence"); }
	bool& bFirstTickField() { return *GetNativePointerField<bool*>(this, "APrimalCinematicActor.bFirstTick"); }
	int& SavedSeparateTranslucencyField() { return *GetNativePointerField<int*>(this, "APrimalCinematicActor.SavedSeparateTranslucency"); }
	int& SavedFogShowFlagField() { return *GetNativePointerField<int*>(this, "APrimalCinematicActor.SavedFogShowFlag"); }
	int& SavedFogShowFlagViewportClientField() { return *GetNativePointerField<int*>(this, "APrimalCinematicActor.SavedFogShowFlagViewportClient"); }
	bool& bSequenceEndedAllPlayField() { return *GetNativePointerField<bool*>(this, "APrimalCinematicActor.bSequenceEndedAllPlay"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APrimalCinematicActor.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "APrimalCinematicActor.Tick(float)", DeltaTime); }
	void Play() { NativeCall<void>(this, "APrimalCinematicActor.Play()"); }
	void Draw() { NativeCall<void>(this, "APrimalCinematicActor.Draw()"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalCinematicActor.BeginPlay()"); }
	void PlayInternal() { NativeCall<void>(this, "APrimalCinematicActor.PlayInternal()"); }
	void TickInternal() { NativeCall<void>(this, "APrimalCinematicActor.TickInternal()"); }
	void Stop() { NativeCall<void>(this, "APrimalCinematicActor.Stop()"); }
};
