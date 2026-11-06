#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AHUD : public AActor
{
public:
	AHUD() = delete;
	~AHUD() = delete;
	AHUD(const AHUD&) = delete;
	AHUD& operator=(const AHUD&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AHUD"); }

	int& CurrentTargetIndexField() { return *GetNativePointerField<int*>(this, "AHUD.CurrentTargetIndex"); }
	double& LastHUDRenderTimeField() { return *GetNativePointerField<double*>(this, "AHUD.LastHUDRenderTime"); }
	float& RenderDeltaField() { return *GetNativePointerField<float*>(this, "AHUD.RenderDelta"); }
	TArray<FName, TSizedDefaultAllocator<32> >& DebugDisplayField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AHUD.DebugDisplay"); }
	TArray<FName, TSizedDefaultAllocator<32> >& ToggledDebugCategoriesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AHUD.ToggledDebugCategories"); }
	TArray<FHUDHitBox*, TSizedDefaultAllocator<32> >& HitBoxHitsField() { return *GetNativePointerField<TArray<FHUDHitBox*, TSizedDefaultAllocator<32> >*>(this, "AHUD.HitBoxHits"); }
	BitFieldValue<bool, unsigned char> bLostFocusPaused() { return { this, "AHUD.bLostFocusPaused"}; }
	BitFieldValue<bool, unsigned char> bShowHUD() { return { this, "AHUD.bShowHUD"}; }
	BitFieldValue<bool, unsigned char> bShowDebugInfo() { return { this, "AHUD.bShowDebugInfo"}; }
	BitFieldValue<bool, unsigned char> bShowHitBoxDebugInfo() { return { this, "AHUD.bShowHitBoxDebugInfo"}; }
	BitFieldValue<bool, unsigned char> bShowOverlays() { return { this, "AHUD.bShowOverlays"}; }
	BitFieldValue<bool, unsigned char> bEnableDebugTextShadow() { return { this, "AHUD.bEnableDebugTextShadow"}; }
	BitFieldValue<bool, unsigned char> bShowDebugForReticleTarget() { return { this, "AHUD.bShowDebugForReticleTarget"}; }
	static void AddActorToDebugList(AActor* InActor, TArray<AActor*, TSizedDefaultAllocator<32> >& InOutList, UWorld* InWorld) { NativeCall<void, AActor*, TArray<AActor*, TSizedDefaultAllocator<32> >&, UWorld*>(nullptr, "AHUD.AddActorToDebugList(AActor*,TArray<AActor*,TSizedDefaultAllocator<32>>&,UWorld*)", InActor, InOutList, InWorld); }
	APlayerController* GetOwningPlayerController() { return NativeCall<APlayerController*>(this, "AHUD.GetOwningPlayerController()"); }
	bool ShouldDisplayDebug(const FName& DebugType) { return NativeCall<bool, const FName&>(this, "AHUD.ShouldDisplayDebug(FName&)", DebugType); }
	AActor* GetCurrentDebugTargetActor() { return NativeCall<AActor*>(this, "AHUD.GetCurrentDebugTargetActor()"); }
	void GetTextSize(const FString& Text, float& OutWidth, float& OutHeight, UFont* Font, float Scale) { NativeCall<void, const FString&, float&, float&, UFont*, float>(this, "AHUD.GetTextSize(FString&,float&,float&,UFont*,float)", Text, OutWidth, OutHeight, Font, Scale); }
	APawn* GetOwningPawn() { return NativeCall<APawn*>(this, "AHUD.GetOwningPawn()"); }
	void RemoveDebugText_Implementation(AActor* SrcActor, bool bLeaveDurationText) { NativeCall<void, AActor*, bool>(this, "AHUD.RemoveDebugText_Implementation(AActor*,bool)", SrcActor, bLeaveDurationText); }
	void DrawDebugTextList() { NativeCall<void>(this, "AHUD.DrawDebugTextList()"); }
	void ShowHUD() { NativeCall<void>(this, "AHUD.ShowHUD()"); }
	void HandleBugScreenShot() { NativeCall<void>(this, "AHUD.HandleBugScreenShot()"); }
	const FHUDHitBox* GetHitBoxAtCoordinates(UE::Math::TVector2<double>* InHitLocation, bool bIsConsumingInput) { if (!InHitLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<const FHUDHitBox *, UE :: Math :: TVector2 < double >, bool>(this, "AHUD.GetHitBoxAtCoordinates(UE::Math::TVector2<double>,bool)", *InHitLocation, bIsConsumingInput); }
	void ShowDebugInfo(float& YL, float& YPos) { NativeCall<void, float&, float&>(this, "AHUD.ShowDebugInfo(float&,float&)", YL, YPos); }
	void ShowDebugToggleSubCategory(FName Category) { NativeCall<void, FName>(this, "AHUD.ShowDebugToggleSubCategory(FName)", Category); }
	void NotifyHitBoxBeginCursorOver(FName BoxName) { NativeCall<void, FName>(this, "AHUD.NotifyHitBoxBeginCursorOver(FName)", BoxName); }
	void SetCanvas(UCanvas* InCanvas, UCanvas* InDebugCanvas) { NativeCall<void, UCanvas*, UCanvas*>(this, "AHUD.SetCanvas(UCanvas*,UCanvas*)", InCanvas, InDebugCanvas); }
	void AddPostRenderedActor(AActor* A) { NativeCall<void, AActor*>(this, "AHUD.AddPostRenderedActor(AActor*)", A); }
	void NotifyHitBoxClick(FName BoxName) { NativeCall<void, FName>(this, "AHUD.NotifyHitBoxClick(FName)", BoxName); }
	void OnLostFocusPause(bool bEnable) { NativeCall<void, bool>(this, "AHUD.OnLostFocusPause(bool)", bEnable); }
	void ShowDebug(FName DebugType) { NativeCall<void, FName>(this, "AHUD.ShowDebug(FName)", DebugType); }
	bool UpdateAndDispatchHitBoxClickEvents(UE::Math::TVector2<double>* ClickLocation, EInputEvent InEventType) { if (!ClickLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector2 < double >, EInputEvent>(this, "AHUD.UpdateAndDispatchHitBoxClickEvents(UE::Math::TVector2<double>,EInputEvent)", *ClickLocation, InEventType); }
	void RemovePostRenderedActor(AActor* A) { NativeCall<void, AActor*>(this, "AHUD.RemovePostRenderedActor(AActor*)", A); }
	void PostRender() { NativeCall<void>(this, "AHUD.PostRender()"); }
	void PreviousDebugTarget() { NativeCall<void>(this, "AHUD.PreviousDebugTarget()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AHUD.PostInitializeComponents()"); }
	void NotifyBindPostProcessEffects() { NativeCall<void>(this, "AHUD.NotifyBindPostProcessEffects()"); }
	void NotifyHitBoxRelease(FName BoxName) { NativeCall<void, FName>(this, "AHUD.NotifyHitBoxRelease(FName)", BoxName); }
	void DrawHUD() { NativeCall<void>(this, "AHUD.DrawHUD()"); }
	UE::Math::TVector2<double>* GetCoordinateOffset(UE::Math::TVector2<double>* result) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*>(this, "AHUD.GetCoordinateOffset()", result); }
	UFont* GetFontFromSizeIndex(int FontSizeIndex) { return NativeCall<UFont*, int>(this, "AHUD.GetFontFromSizeIndex(int)", FontSizeIndex); }
	void NextDebugTarget() { NativeCall<void>(this, "AHUD.NextDebugTarget()"); }
	void NotifyHitBoxEndCursorOver(FName BoxName) { NativeCall<void, FName>(this, "AHUD.NotifyHitBoxEndCursorOver(FName)", BoxName); }
	void GetDebugActorList(TArray<AActor*, TSizedDefaultAllocator<32> >& InOutList) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >&>(this, "AHUD.GetDebugActorList(TArray<AActor*,TSizedDefaultAllocator<32>>&)", InOutList); }
	void DrawActorOverlays(UE::Math::TVector<double>* Viewpoint, UE::Math::TRotator<double>* ViewRotation) { if (!Viewpoint) throw std::invalid_argument("Null native value parameter"); if (!ViewRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >>(this, "AHUD.DrawActorOverlays(UE::Math::TVector<double>,UE::Math::TRotator<double>)", *Viewpoint, *ViewRotation); }
	void AddHitBox(UE::Math::TVector2<double>* Position, UE::Math::TVector2<double>* Size, FName Name, bool bConsumesInput, int Priority) { if (!Position) throw std::invalid_argument("Null native value parameter"); if (!Size) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector2 < double >, UE :: Math :: TVector2 < double >, FName, bool, int>(this, "AHUD.AddHitBox(UE::Math::TVector2<double>,UE::Math::TVector2<double>,FName,bool,int)", *Position, *Size, Name, bConsumesInput, Priority); }
	void DrawSafeZoneOverlay() { NativeCall<void>(this, "AHUD.DrawSafeZoneOverlay()"); }
	bool IsCanvasValid_WarnIfNot() { return NativeCall<bool>(this, "AHUD.IsCanvasValid_WarnIfNot()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AHUD"); }
};
