#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UHUDPingWidget : public UPrimalUI
{
public:
	UHUDPingWidget() = delete;
	~UHUDPingWidget() = delete;
	UHUDPingWidget(const UHUDPingWidget&) = delete;
	UHUDPingWidget& operator=(const UHUDPingWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHUDPingWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHUDPingWidget"); }

	FName& PingPlayerNameTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDPingWidget.PingPlayerNameTextBlockName"); }
	FName& PingRespondingPlayerNameTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDPingWidget.PingRespondingPlayerNameTextBlockName"); }
	FName& PingIconNameField() { return *GetNativePointerField<FName*>(this, "UHUDPingWidget.PingIconName"); }
	FName& PingSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UHUDPingWidget.PingSwitcherName"); }
	FName& PingOffScreenArrowNameField() { return *GetNativePointerField<FName*>(this, "UHUDPingWidget.PingOffScreenArrowName"); }
	FName& PingOffScreenIconNameField() { return *GetNativePointerField<FName*>(this, "UHUDPingWidget.PingOffScreenIconName"); }
	FName& PingOffScreenArrowBackgroundNameField() { return *GetNativePointerField<FName*>(this, "UHUDPingWidget.PingOffScreenArrowBackgroundName"); }
	float& WidgetRemoveDurationField() { return *GetNativePointerField<float*>(this, "UHUDPingWidget.WidgetRemoveDuration"); }
	FPingData& WidgetPingDataField() { return *GetNativePointerField<FPingData*>(this, "UHUDPingWidget.WidgetPingData"); }
	UTextBlock*& Ping_PingPlayerNameTextField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDPingWidget.Ping_PingPlayerNameText"); }
	UTextBlock*& Ping_PingRespondingPlayerNameTextField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDPingWidget.Ping_PingRespondingPlayerNameText"); }
	UImage*& Ping_IconField() { return *GetNativePointerField<UImage**>(this, "UHUDPingWidget.Ping_Icon"); }
	UWidgetSwitcher*& Ping_SwitcherField() { return *GetNativePointerField<UWidgetSwitcher**>(this, "UHUDPingWidget.Ping_Switcher"); }
	UImage*& Ping_OffScreenArrowField() { return *GetNativePointerField<UImage**>(this, "UHUDPingWidget.Ping_OffScreenArrow"); }
	UImage*& Ping_OffScreenIconField() { return *GetNativePointerField<UImage**>(this, "UHUDPingWidget.Ping_OffScreenIcon"); }
	UImage*& Ping_OffScreenArrowBackgroundField() { return *GetNativePointerField<UImage**>(this, "UHUDPingWidget.Ping_OffScreenArrowBackground"); }
	BitFieldValue<bool, unsigned __int32> bIsHovered() { return { this, "UHUDPingWidget.bIsHovered"}; }
	void OnPingWidgetRemoved() { NativeCall<void>(this, "UHUDPingWidget.OnPingWidgetRemoved()"); }
	void InitializePingWidget(const FPingData& FromPingData) { NativeCall<void, const FPingData&>(this, "UHUDPingWidget.InitializePingWidget(FPingData&)", FromPingData); }
	void OnPingHovered_Implementation(const AShooterCharacter* HoveringPlayer) { NativeCall<void, const AShooterCharacter*>(this, "UHUDPingWidget.OnPingHovered_Implementation(AShooterCharacter*)", HoveringPlayer); }
	void OnPingWidgetRemoved_Implementation() { NativeCall<void>(this, "UHUDPingWidget.OnPingWidgetRemoved_Implementation()"); }
	void OnPingWidgetCreated() { NativeCall<void>(this, "UHUDPingWidget.OnPingWidgetCreated()"); }
	bool UpdateWidgetPingData(const FPingData& WithPingData) { return NativeCall<bool, const FPingData&>(this, "UHUDPingWidget.UpdateWidgetPingData(FPingData&)", WithPingData); }
	void RemovePingWidget() { NativeCall<void>(this, "UHUDPingWidget.RemovePingWidget()"); }
	void OnPingUnhovered(const AShooterCharacter* UnhoveringPlayer) { NativeCall<void, const AShooterCharacter*>(this, "UHUDPingWidget.OnPingUnhovered(AShooterCharacter*)", UnhoveringPlayer); }
	static bool IsPingValid(const FPingData& ForPingData) { return NativeCall<bool, const FPingData&>(nullptr, "UHUDPingWidget.IsPingValid(FPingData&)", ForPingData); }
	const FPingData& GetPingData() { return NativeCall<const FPingData&>(this, "UHUDPingWidget.GetPingData()"); }
	static UE::Math::TVector<double>* GetPingWorldLocation(UE::Math::TVector<double>* result, const FPingData& FromPingData) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const FPingData&>(nullptr, "UHUDPingWidget.GetPingWorldLocation(FPingData&)", result, FromPingData); }
	void AddToViewport(int ZOrder) { NativeCall<void, int>(this, "UHUDPingWidget.AddToViewport(int)", ZOrder); }
	void OnPingHovered(const AShooterCharacter* HoveringPlayer) { NativeCall<void, const AShooterCharacter*>(this, "UHUDPingWidget.OnPingHovered(AShooterCharacter*)", HoveringPlayer); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UHUDPingWidget.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void OnPingWidgetCreated_Implementation() { NativeCall<void>(this, "UHUDPingWidget.OnPingWidgetCreated_Implementation()"); }
	void OnPingResponseReceived_Implementation(const AShooterCharacter* RespondingPlayer) { NativeCall<void, const AShooterCharacter*>(this, "UHUDPingWidget.OnPingResponseReceived_Implementation(AShooterCharacter*)", RespondingPlayer); }
	void OnPingUnhovered_Implementation(const AShooterCharacter* UnhoveringPlayer) { NativeCall<void, const AShooterCharacter*>(this, "UHUDPingWidget.OnPingUnhovered_Implementation(AShooterCharacter*)", UnhoveringPlayer); }
	void DoWidgetRemove() { NativeCall<void>(this, "UHUDPingWidget.DoWidgetRemove()"); }
	bool HasValidPingData() { return NativeCall<bool>(this, "UHUDPingWidget.HasValidPingData()"); }
};
