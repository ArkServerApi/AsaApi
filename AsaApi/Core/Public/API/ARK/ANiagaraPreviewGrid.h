#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ANiagaraPreviewGrid : public AActor
{
public:
	ANiagaraPreviewGrid() = delete;
	~ANiagaraPreviewGrid() = delete;
	ANiagaraPreviewGrid(const ANiagaraPreviewGrid&) = delete;
	ANiagaraPreviewGrid& operator=(const ANiagaraPreviewGrid&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ANiagaraPreviewGrid"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANiagaraPreviewGrid"); }

	float& SpacingXField() { return *GetNativePointerField<float*>(this, "ANiagaraPreviewGrid.SpacingX"); }
	float& SpacingYField() { return *GetNativePointerField<float*>(this, "ANiagaraPreviewGrid.SpacingY"); }
	int& NumXField() { return *GetNativePointerField<int*>(this, "ANiagaraPreviewGrid.NumX"); }
	int& NumYField() { return *GetNativePointerField<int*>(this, "ANiagaraPreviewGrid.NumY"); }
	BitFieldValue<bool, unsigned __int32> bPreviewDirty() { return { this, "ANiagaraPreviewGrid.bPreviewDirty"}; }
	BitFieldValue<bool, unsigned __int32> bPreviewActive() { return { this, "ANiagaraPreviewGrid.bPreviewActive"}; }
	void TickPreviews() { NativeCall<void>(this, "ANiagaraPreviewGrid.TickPreviews()"); }
	void PostLoad() { NativeCall<void>(this, "ANiagaraPreviewGrid.PostLoad()"); }
	void GeneratePreviews() { NativeCall<void>(this, "ANiagaraPreviewGrid.GeneratePreviews()"); }
	void SetPaused(bool bPaused) { NativeCall<void, bool>(this, "ANiagaraPreviewGrid.SetPaused(bool)", bPaused); }
	void TickActor(float DeltaTime, ELevelTick TickType, FActorTickFunction& ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorTickFunction&>(this, "ANiagaraPreviewGrid.TickActor(float,ELevelTick,FActorTickFunction&)", DeltaTime, TickType, ThisTickFunction); }
	void BeginDestroy() { NativeCall<void>(this, "ANiagaraPreviewGrid.BeginDestroy()"); }
	void DestroyPreviews() { NativeCall<void>(this, "ANiagaraPreviewGrid.DestroyPreviews()"); }
	void ActivatePreviews(bool bReset) { NativeCall<void, bool>(this, "ANiagaraPreviewGrid.ActivatePreviews(bool)", bReset); }
	void DeactivatePreviews() { NativeCall<void>(this, "ANiagaraPreviewGrid.DeactivatePreviews()"); }
	void GetPreviews(TArray<UNiagaraComponent*, TSizedDefaultAllocator<32> >& OutPreviews) { NativeCall<void, TArray<UNiagaraComponent*, TSizedDefaultAllocator<32> >&>(this, "ANiagaraPreviewGrid.GetPreviews(TArray<UNiagaraComponent*,TSizedDefaultAllocator<32>>&)", OutPreviews); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "ANiagaraPreviewGrid.ShouldTickIfViewportsOnly()"); }
};
