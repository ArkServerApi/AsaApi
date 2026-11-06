#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UHUDElementBarWidget : public UPrimalUserWidget
{
public:
	UHUDElementBarWidget() = delete;
	~UHUDElementBarWidget() = delete;
	UHUDElementBarWidget(const UHUDElementBarWidget&) = delete;
	UHUDElementBarWidget& operator=(const UHUDElementBarWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHUDElementBarWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHUDElementBarWidget"); }

	TWeakObjectPtr<APrimalCharacter, FWeakObjectPtr>& ForPrimalCharacterField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCharacter, FWeakObjectPtr>*>(this, "UHUDElementBarWidget.ForPrimalCharacter"); }
	FName& HelmetBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDElementBarWidget.HelmetBarName"); }
	FName& ShirtBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDElementBarWidget.ShirtBarName"); }
	FName& GlovesBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDElementBarWidget.GlovesBarName"); }
	FName& PantsBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDElementBarWidget.PantsBarName"); }
	FName& BootsBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDElementBarWidget.BootsBarName"); }
	FName& BoostIconNameField() { return *GetNativePointerField<FName*>(this, "UHUDElementBarWidget.BoostIconName"); }
	FName& ShoulderCannonBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDElementBarWidget.ShoulderCannonBarName"); }
	float& iconsBottomOffsetField() { return *GetNativePointerField<float*>(this, "UHUDElementBarWidget.iconsBottomOffset"); }
	float& iconSeparationField() { return *GetNativePointerField<float*>(this, "UHUDElementBarWidget.iconSeparation"); }
	bool& bBoostIconHiddenField() { return *GetNativePointerField<bool*>(this, "UHUDElementBarWidget.bBoostIconHidden"); }
	bool& bPrevBoostIconHiddenField() { return *GetNativePointerField<bool*>(this, "UHUDElementBarWidget.bPrevBoostIconHidden"); }
	UE::Math::TVector2<double>& boostIconOffsetField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UHUDElementBarWidget.boostIconOffset"); }
	UProgressBarWidget*& helmetBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UHUDElementBarWidget.helmetBar"); }
	UProgressBarWidget*& shirtBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UHUDElementBarWidget.shirtBar"); }
	UProgressBarWidget*& glovesBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UHUDElementBarWidget.glovesBar"); }
	UProgressBarWidget*& pantsBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UHUDElementBarWidget.pantsBar"); }
	UProgressBarWidget*& bootsBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UHUDElementBarWidget.bootsBar"); }
	UProgressBarWidget*& shoulderCannonBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UHUDElementBarWidget.shoulderCannonBar"); }
	UImage*& boostIconField() { return *GetNativePointerField<UImage**>(this, "UHUDElementBarWidget.boostIcon"); }
	void InitializeMe(UPrimalUI* ParentUI) { NativeCall<void, UPrimalUI*>(this, "UHUDElementBarWidget.InitializeMe(UPrimalUI*)", ParentUI); }
	void UpdateBoostIconVisibility() { NativeCall<void>(this, "UHUDElementBarWidget.UpdateBoostIconVisibility()"); }
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UHUDElementBarWidget.NativeTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
};
