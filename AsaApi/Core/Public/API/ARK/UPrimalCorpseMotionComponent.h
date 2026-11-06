#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UActorComponent.h"

struct UPrimalCorpseMotionComponent : UActorComponent
{
public:
	UPrimalCorpseMotionComponent() = delete;
	~UPrimalCorpseMotionComponent() = delete;
	UPrimalCorpseMotionComponent(const UPrimalCorpseMotionComponent&) = delete;
	UPrimalCorpseMotionComponent& operator=(const UPrimalCorpseMotionComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalCorpseMotionComponent"); }

	bool& bProcessingStatesField() { return *GetNativePointerField<bool*>(this, "UPrimalCorpseMotionComponent.bProcessingStates"); }
	bool& bShutdownRequestedField() { return *GetNativePointerField<bool*>(this, "UPrimalCorpseMotionComponent.bShutdownRequested"); }

	void OnUnregister() { NativeCall<void>(this, "UPrimalCorpseMotionComponent.OnUnregister()"); }
	bool BeginCorpseMotion(APrimalCharacter* Character, APrimalCharacter* LocalDragger, bool bUseDragPose) { return NativeCall<bool, APrimalCharacter*, APrimalCharacter*, bool>(this, "UPrimalCorpseMotionComponent.BeginCorpseMotion(APrimalCharacter*,APrimalCharacter*,bool)", Character, LocalDragger, bUseDragPose); }
	bool CaptureCorpseMotion(APrimalCharacter* Corpse, APrimalCharacter* LocalDragger, bool bUseDragPose) { return NativeCall<bool, APrimalCharacter*, APrimalCharacter*, bool>(this, "UPrimalCorpseMotionComponent.CaptureCorpseMotion(APrimalCharacter*,APrimalCharacter*,bool)", Corpse, LocalDragger, bUseDragPose); }
	static bool IsCorpseMotionReady(const APrimalCharacter* Character) { return NativeCall<bool, const APrimalCharacter*>(nullptr, "UPrimalCorpseMotionComponent.IsCorpseMotionReady(APrimalCharacter*)", Character); }
	bool IsControllingCorpse(const APrimalCharacter* Corpse) { return NativeCall<bool, const APrimalCharacter*>(this, "UPrimalCorpseMotionComponent.IsControllingCorpse(APrimalCharacter*)", Corpse); }
	bool ReleaseCorpseMotion(APrimalCharacter* Character, bool bConsumed) { return NativeCall<bool, APrimalCharacter*, bool>(this, "UPrimalCorpseMotionComponent.ReleaseCorpseMotion(APrimalCharacter*,bool)", Character, bConsumed); }
	void OnRegister() { NativeCall<void>(this, "UPrimalCorpseMotionComponent.OnRegister()"); }
	void Shutdown() { NativeCall<void>(this, "UPrimalCorpseMotionComponent.Shutdown()"); }
	bool CanBeginCorpseMotion() { return NativeCall<bool>(this, "UPrimalCorpseMotionComponent.CanBeginCorpseMotion()"); }
	bool HasCorpseMotion(const APrimalCharacter* Character) { return NativeCall<bool, const APrimalCharacter*>(this, "UPrimalCorpseMotionComponent.HasCorpseMotion(APrimalCharacter*)", Character); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalCorpseMotionComponent"); }

	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UPrimalCorpseMotionComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
};
