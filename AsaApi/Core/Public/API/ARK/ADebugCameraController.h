#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalPlayerController.h"

struct ADebugCameraController : APrimalPlayerController
{
public:
	ADebugCameraController() = delete;
	~ADebugCameraController() = delete;
	ADebugCameraController(const ADebugCameraController&) = delete;
	ADebugCameraController& operator=(const ADebugCameraController&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADebugCameraController"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADebugCameraController"); }

	float& SpeedScaleField() { return *GetNativePointerField<float*>(this, "ADebugCameraController.SpeedScale"); }
	float& InitialMaxSpeedField() { return *GetNativePointerField<float*>(this, "ADebugCameraController.InitialMaxSpeed"); }
	float& InitialAccelField() { return *GetNativePointerField<float*>(this, "ADebugCameraController.InitialAccel"); }
	float& InitialDecelField() { return *GetNativePointerField<float*>(this, "ADebugCameraController.InitialDecel"); }
	float& OrbitRadiusField() { return *GetNativePointerField<float*>(this, "ADebugCameraController.OrbitRadius"); }
	int& LastViewModeSettingsIndexField() { return *GetNativePointerField<int*>(this, "ADebugCameraController.LastViewModeSettingsIndex"); }

	void UpdateRotation(float DeltaTime) { NativeCall<void, float>(this, "ADebugCameraController.UpdateRotation(float)", DeltaTime); }
	void IncreaseCameraSpeed() { NativeCall<void>(this, "ADebugCameraController.IncreaseCameraSpeed()"); }
	void ToggleOrbitCenter() { NativeCall<void>(this, "ADebugCameraController.ToggleOrbitCenter()"); }
	void Unselect() { NativeCall<void>(this, "ADebugCameraController.Unselect()"); }
	void ToggleFreezeRendering() { NativeCall<void>(this, "ADebugCameraController.ToggleFreezeRendering()"); }
	void ToggleOrbitHitPoint() { NativeCall<void>(this, "ADebugCameraController.ToggleOrbitHitPoint()"); }
	void UpdateRotationForOrbit(float DeltaTime) { NativeCall<void, float>(this, "ADebugCameraController.UpdateRotationForOrbit(float)", DeltaTime); }
	void SelectTargetedObject() { NativeCall<void>(this, "ADebugCameraController.SelectTargetedObject()"); }
	void PreProcessInput(float DeltaTime, bool bGamePaused) { NativeCall<void, float, bool>(this, "ADebugCameraController.PreProcessInput(float,bool)", DeltaTime, bGamePaused); }
	void IncreaseFOV() { NativeCall<void>(this, "ADebugCameraController.IncreaseFOV()"); }
	void ApplySpeedScale() { NativeCall<void>(this, "ADebugCameraController.ApplySpeedScale()"); }
	ASpectatorPawn* SpawnSpectatorPawn() { return NativeCall<ASpectatorPawn*>(this, "ADebugCameraController.SpawnSpectatorPawn()"); }
	void OnDeactivate(APlayerController* RestoredPC) { NativeCall<void, APlayerController*>(this, "ADebugCameraController.OnDeactivate(APlayerController*)", RestoredPC); }
	void ToggleDisplay() { NativeCall<void>(this, "ADebugCameraController.ToggleDisplay()"); }
	void SetSpectatorPawn(ASpectatorPawn* NewSpectatorPawn) { NativeCall<void, ASpectatorPawn*>(this, "ADebugCameraController.SetSpectatorPawn(ASpectatorPawn*)", NewSpectatorPawn); }
	void DecreaseFOV() { NativeCall<void>(this, "ADebugCameraController.DecreaseFOV()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "ADebugCameraController.PostInitializeComponents()"); }
	void SetupInputComponent() { NativeCall<void>(this, "ADebugCameraController.SetupInputComponent()"); }
	void ShowDebugSelectedInfo() { NativeCall<void>(this, "ADebugCameraController.ShowDebugSelectedInfo()"); }
	void DecreaseCameraSpeed() { NativeCall<void>(this, "ADebugCameraController.DecreaseCameraSpeed()"); }
	void OnActivate(APlayerController* OriginalPC) { NativeCall<void, APlayerController*>(this, "ADebugCameraController.OnActivate(APlayerController*)", OriginalPC); }
	void EndSpectatingState() { NativeCall<void>(this, "ADebugCameraController.EndSpectatingState()"); }
	void Exit() { NativeCall<void>(this, "ADebugCameraController.Exit()"); }
	void ToggleOrbit(bool bOrbitCenter) { NativeCall<void, bool>(this, "ADebugCameraController.ToggleOrbit(bool)", bOrbitCenter); }
	void AddCheats(bool bForce) { NativeCall<void, bool>(this, "ADebugCameraController.AddCheats(bool)", bForce); }

	BitFieldValue<bool, unsigned __int32> bShowSelectedInfo() { return { this, "ADebugCameraController.bShowSelectedInfo"}; }
	BitFieldValue<bool, unsigned __int32> bIsFrozenRendering() { return { this, "ADebugCameraController.bIsFrozenRendering"}; }
	BitFieldValue<bool, unsigned __int32> bIsOrbitingSelectedActor() { return { this, "ADebugCameraController.bIsOrbitingSelectedActor"}; }
	BitFieldValue<bool, unsigned __int32> bOrbitPivotUseCenter() { return { this, "ADebugCameraController.bOrbitPivotUseCenter"}; }
	BitFieldValue<bool, unsigned __int32> bEnableBufferVisualization() { return { this, "ADebugCameraController.bEnableBufferVisualization"}; }
	BitFieldValue<bool, unsigned __int32> bEnableBufferVisualizationFullMode() { return { this, "ADebugCameraController.bEnableBufferVisualizationFullMode"}; }
	BitFieldValue<bool, unsigned __int32> bIsBufferVisualizationInputSetup() { return { this, "ADebugCameraController.bIsBufferVisualizationInputSetup"}; }
	BitFieldValue<bool, unsigned __int32> bLastDisplayEnabled() { return { this, "ADebugCameraController.bLastDisplayEnabled"}; }

	TWeakObjectPtr<AActor, FWeakObjectPtr>& SelectedActorField() { return *GetNativePointerField<TWeakObjectPtr<AActor, FWeakObjectPtr>*>(this, "ADebugCameraController.SelectedActor"); }
	TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>& SelectedComponentField() { return *GetNativePointerField<TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>*>(this, "ADebugCameraController.SelectedComponent"); }
	FHitResult& SelectedHitPointField() { return *GetNativePointerField<FHitResult*>(this, "ADebugCameraController.SelectedHitPoint"); }
	UE::Math::TVector2<double>& LastTouchDragLocationField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "ADebugCameraController.LastTouchDragLocation"); }
	UE::Math::TVector<double>& LastOrbitPawnLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ADebugCameraController.LastOrbitPawnLocation"); }
	UE::Math::TVector<double>& OrbitPivotField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ADebugCameraController.OrbitPivot"); }
	FString& CurrSelectedBufferField() { return *GetNativePointerField<FString*>(this, "ADebugCameraController.CurrSelectedBuffer"); }
	void Select(const FHitResult& Hit) { NativeCall<void, const FHitResult&>(this, "ADebugCameraController.Select(FHitResult&)", Hit); }
	bool GetPivotForOrbit(UE::Math::TVector<double>& PivotLocation) { return NativeCall<bool, UE::Math::TVector<double>&>(this, "ADebugCameraController.GetPivotForOrbit(UE::Math::TVector<double>&)", PivotLocation); }
	void OnTouchEnd(ETouchIndex::Type FingerIndex, UE::Math::TVector<double>* Location) { if (!Location) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, ETouchIndex :: Type, UE :: Math :: TVector < double >>(this, "ADebugCameraController.OnTouchEnd(ETouchIndex::Type,UE::Math::TVector<double>)", FingerIndex, *Location); }
	FString* ConsoleCommand(FString* result, const FString& Cmd, bool bWriteToLog) { return NativeCall<FString*, FString*, const FString&, bool>(this, "ADebugCameraController.ConsoleCommand(FString&,bool)", result, Cmd, bWriteToLog); }
	void OnTouchBegin(ETouchIndex::Type FingerIndex, UE::Math::TVector<double>* Location) { if (!Location) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, ETouchIndex :: Type, UE :: Math :: TVector < double >>(this, "ADebugCameraController.OnTouchBegin(ETouchIndex::Type,UE::Math::TVector<double>)", FingerIndex, *Location); }
	void OnFingerMove(ETouchIndex::Type FingerIndex, UE::Math::TVector<double>* Location) { if (!Location) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, ETouchIndex :: Type, UE :: Math :: TVector < double >>(this, "ADebugCameraController.OnFingerMove(ETouchIndex::Type,UE::Math::TVector<double>)", FingerIndex, *Location); }
};
