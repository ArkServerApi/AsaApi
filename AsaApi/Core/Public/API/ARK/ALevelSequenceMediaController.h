#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ALevelSequenceMediaController : public AActor
{
public:
	ALevelSequenceMediaController() = delete;
	~ALevelSequenceMediaController() = delete;
	ALevelSequenceMediaController(const ALevelSequenceMediaController&) = delete;
	ALevelSequenceMediaController& operator=(const ALevelSequenceMediaController&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALevelSequenceMediaController"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALevelSequenceMediaController"); }

	float& ServerStartTimeSecondsField() { return *GetNativePointerField<float*>(this, "ALevelSequenceMediaController.ServerStartTimeSeconds"); }
	double& SequencePositionSecondsField() { return *GetNativePointerField<double*>(this, "ALevelSequenceMediaController.SequencePositionSeconds"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ALevelSequenceMediaController._getUObject()"); }
	void Client_ConditionallyForceTime(float DesyncThresholdSeconds) { NativeCall<void, float>(this, "ALevelSequenceMediaController.Client_ConditionallyForceTime(float)", DesyncThresholdSeconds); }
	void OnRep_ServerStartTimeSeconds() { NativeCall<void>(this, "ALevelSequenceMediaController.OnRep_ServerStartTimeSeconds()"); }
	void OnTick(float DeltaSeconds, float InPlayRate) { NativeCall<void, float, float>(this, "ALevelSequenceMediaController.OnTick(float,float)", DeltaSeconds, InPlayRate); }
	void OnStartPlaying(const FQualifiedFrameTime& InStartTime) { NativeCall<void, const FQualifiedFrameTime&>(this, "ALevelSequenceMediaController.OnStartPlaying(FQualifiedFrameTime&)", InStartTime); }
	void OnStopPlaying(const FQualifiedFrameTime& InStopTime) { NativeCall<void, const FQualifiedFrameTime&>(this, "ALevelSequenceMediaController.OnStopPlaying(FQualifiedFrameTime&)", InStopTime); }
};
