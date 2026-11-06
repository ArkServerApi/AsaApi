#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AControlRigControlActor : public AActor
{
public:
	AControlRigControlActor() = delete;
	~AControlRigControlActor() = delete;
	AControlRigControlActor(const AControlRigControlActor&) = delete;
	AControlRigControlActor& operator=(const AControlRigControlActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AControlRigControlActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AControlRigControlActor"); }

	bool& bRefreshOnTickField() { return *GetNativePointerField<bool*>(this, "AControlRigControlActor.bRefreshOnTick"); }
	bool& bIsSelectableField() { return *GetNativePointerField<bool*>(this, "AControlRigControlActor.bIsSelectable"); }
	FString& ColorParameterField() { return *GetNativePointerField<FString*>(this, "AControlRigControlActor.ColorParameter"); }
	bool& bCastShadowsField() { return *GetNativePointerField<bool*>(this, "AControlRigControlActor.bCastShadows"); }
	TArray<FName, TSizedDefaultAllocator<32> >& ControlNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AControlRigControlActor.ControlNames"); }
	FName& ColorParameterNameField() { return *GetNativePointerField<FName*>(this, "AControlRigControlActor.ColorParameterName"); }
	void Refresh() { NativeCall<void>(this, "AControlRigControlActor.Refresh()"); }
	void BeginPlay() { NativeCall<void>(this, "AControlRigControlActor.BeginPlay()"); }
	void BeginDestroy() { NativeCall<void>(this, "AControlRigControlActor.BeginDestroy()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AControlRigControlActor.Tick(float)", DeltaSeconds); }
	void HandleControlRigUnbind() { NativeCall<void>(this, "AControlRigControlActor.HandleControlRigUnbind()"); }
	void Clear() { NativeCall<void>(this, "AControlRigControlActor.Clear()"); }
	void RemoveUnbindDelegate() { NativeCall<void>(this, "AControlRigControlActor.RemoveUnbindDelegate()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AControlRigControlActor.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
};
