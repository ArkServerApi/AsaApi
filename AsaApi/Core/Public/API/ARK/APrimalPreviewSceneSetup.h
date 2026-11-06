#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "AActor.h"

struct APrimalPreviewSceneSetup : AActor
{
public:
	APrimalPreviewSceneSetup() = delete;
	~APrimalPreviewSceneSetup() = delete;
	APrimalPreviewSceneSetup(const APrimalPreviewSceneSetup&) = delete;
	APrimalPreviewSceneSetup& operator=(const APrimalPreviewSceneSetup&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalPreviewSceneSetup"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalPreviewSceneSetup"); }



	bool BPCanUseFemaleBoneModifiers_Implementation(UMeshComponent* Mesh) { return NativeCall<bool, UMeshComponent*>(this, "APrimalPreviewSceneSetup.BPCanUseFemaleBoneModifiers_Implementation(UMeshComponent*)", Mesh); }
	void NotifyPreviewSceneUpdated_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalPreviewSceneSetup.NotifyPreviewSceneUpdated_Implementation(float)", DeltaTime); }
	bool BPCanUseFemaleBoneModifiers(UMeshComponent* Mesh) { return NativeCall<bool, UMeshComponent*>(this, "APrimalPreviewSceneSetup.BPCanUseFemaleBoneModifiers(UMeshComponent*)", Mesh); }
	void NotifyPreviewSceneUpdated(float DeltaTime) { NativeCall<void, float>(this, "APrimalPreviewSceneSetup.NotifyPreviewSceneUpdated(float)", DeltaTime); }

	void NotifySetupPreviewScene_Implementation(UMeshComponent* ForMeshComp, const TArray<USceneComponent*, TSizedDefaultAllocator<32> >& ForChildComps, AShooterPlayerController* ForPC) { NativeCall<void, UMeshComponent*, const TArray<USceneComponent*, TSizedDefaultAllocator<32> >&, AShooterPlayerController*>(this, "APrimalPreviewSceneSetup.NotifySetupPreviewScene_Implementation(UMeshComponent*,TArray<USceneComponent*,TSizedDefaultAllocator<32>>&,AShooterPlayerController*)", ForMeshComp, ForChildComps, ForPC); }
	void NotifySetupPreviewScene(UMeshComponent* ForMeshComp, const TArray<USceneComponent*, TSizedDefaultAllocator<32> >& ForChildComps, AShooterPlayerController* ForPC) { NativeCall<void, UMeshComponent*, const TArray<USceneComponent*, TSizedDefaultAllocator<32> >&, AShooterPlayerController*>(this, "APrimalPreviewSceneSetup.NotifySetupPreviewScene(UMeshComponent*,TArray<USceneComponent*,TSizedDefaultAllocator<32>>&,AShooterPlayerController*)", ForMeshComp, ForChildComps, ForPC); }
};
