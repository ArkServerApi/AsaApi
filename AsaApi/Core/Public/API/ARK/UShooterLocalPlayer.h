#pragma once
#include "BulkForward.h"
#include "ULocalPlayer.h"

struct UShooterLocalPlayer : public ULocalPlayer
{
public:
	UShooterLocalPlayer() = delete;
	~UShooterLocalPlayer() = delete;
	UShooterLocalPlayer(const UShooterLocalPlayer&) = delete;
	UShooterLocalPlayer& operator=(const UShooterLocalPlayer&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterLocalPlayer"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterLocalPlayer"); }

	UOnlineSession*& OnlineSessionField() { return *GetNativePointerField<UOnlineSession**>(this, "UShooterLocalPlayer.OnlineSession"); }
	UShooterPersistentUser*& PersistentUserField() { return *GetNativePointerField<UShooterPersistentUser**>(this, "UShooterLocalPlayer.PersistentUser"); }
	FPrimalTriggerEffect& CachedTriggerEffectField() { return *GetNativePointerField<FPrimalTriggerEffect*>(this, "UShooterLocalPlayer.CachedTriggerEffect"); }
	int& LastCursorFrameField() { return *GetNativePointerField<int*>(this, "UShooterLocalPlayer.LastCursorFrame"); }
	TWeakObjectPtr<UWidget, FWeakObjectPtr>& LastHighlightedWidgetField() { return *GetNativePointerField<TWeakObjectPtr<UWidget, FWeakObjectPtr>*>(this, "UShooterLocalPlayer.LastHighlightedWidget"); }
	FLastFocusEvent& LastFocusEventField() { return *GetNativePointerField<FLastFocusEvent*>(this, "UShooterLocalPlayer.LastFocusEvent"); }
	double& LastNavTimeField() { return *GetNativePointerField<double*>(this, "UShooterLocalPlayer.LastNavTime"); }
	double& LastHapticsTimeField() { return *GetNativePointerField<double*>(this, "UShooterLocalPlayer.LastHapticsTime"); }
	void SetControllerId(int NewControllerId) { NativeCall<void, int>(this, "UShooterLocalPlayer.SetControllerId(int)", NewControllerId); }
	void ClearUITick(UPrimalUI* ForUI) { NativeCall<void, UPrimalUI*>(this, "UShooterLocalPlayer.ClearUITick(UPrimalUI*)", ForUI); }
	void UpdateUserPrivilige(EUserPrivileges::Type Privilege, unsigned int Result) { NativeCall<void, EUserPrivileges::Type, unsigned int>(this, "UShooterLocalPlayer.UpdateUserPrivilige(EUserPrivileges::Type,unsignedint)", Privilege, Result); }
	void OnConnectionFailed(const FString& reason) { NativeCall<void, const FString&>(this, "UShooterLocalPlayer.OnConnectionFailed(FString&)", reason); }
	FSceneView* GetSceneView(FSceneViewFamily* ViewFamily, UE::Math::TVector<double>& OutViewLocation, UE::Math::TRotator<double>& OutViewRotation, FViewport* Viewport, FViewElementDrawer* ViewDrawer, int StereoViewIndex, bool bIsNotForDraw, bool bForProjectionOnly) { return NativeCall<FSceneView*, FSceneViewFamily*, UE::Math::TVector<double>&, UE::Math::TRotator<double>&, FViewport*, FViewElementDrawer*, int, bool, bool>(this, "UShooterLocalPlayer.GetSceneView(FSceneViewFamily*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FViewport*,FViewElementDrawer*,int,bool,bool)", ViewFamily, OutViewLocation, OutViewRotation, Viewport, ViewDrawer, StereoViewIndex, bIsNotForDraw, bForProjectionOnly); }
	FString* GetNickname(FString* result) { return NativeCall<FString*, FString*>(this, "UShooterLocalPlayer.GetNickname()", result); }
	void TickUI(float DeltaTime) { NativeCall<void, float>(this, "UShooterLocalPlayer.TickUI(float)", DeltaTime); }
	UShooterPersistentUser* GetPersistentUser() { return NativeCall<UShooterPersistentUser*>(this, "UShooterLocalPlayer.GetPersistentUser()"); }
	FString* GetGameLoginOptions(FString* result) { return NativeCall<FString*, FString*>(this, "UShooterLocalPlayer.GetGameLoginOptions()", result); }
	void PlayerRemoved() { NativeCall<void>(this, "UShooterLocalPlayer.PlayerRemoved()"); }
	bool CalcSceneViewInitOptions(FSceneViewInitOptions& OutInitOptions, FViewport* Viewport, FViewElementDrawer* ViewDrawer, int StereoViewIndex) { return NativeCall<bool, FSceneViewInitOptions&, FViewport*, FViewElementDrawer*, int>(this, "UShooterLocalPlayer.CalcSceneViewInitOptions(FSceneViewInitOptions&,FViewport*,FViewElementDrawer*,int)", OutInitOptions, Viewport, ViewDrawer, StereoViewIndex); }
	bool LocalPlayerCameraIsBasedOnDynamic() { return NativeCall<bool>(this, "UShooterLocalPlayer.LocalPlayerCameraIsBasedOnDynamic()"); }
	void LoadPersistentUser() { NativeCall<void>(this, "UShooterLocalPlayer.LoadPersistentUser()"); }
	FString* GetSaveSlotName(FString* result) { return NativeCall<FString*, FString*>(this, "UShooterLocalPlayer.GetSaveSlotName()", result); }
	bool Exec(UWorld* InWorld, const wchar_t* Cmd, FOutputDevice& Ar) { return NativeCall<bool, UWorld*, const wchar_t*, FOutputDevice&>(this, "UShooterLocalPlayer.Exec(UWorld*,wchar_t*,FOutputDevice&)", InWorld, Cmd, Ar); }
};
