#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

class UHUDCustomStatusWidget : public UPrimalUI
{
public:
	UHUDCustomStatusWidget() = delete;
	~UHUDCustomStatusWidget() = delete;
	UHUDCustomStatusWidget(const UHUDCustomStatusWidget&) = delete;
	UHUDCustomStatusWidget& operator=(const UHUDCustomStatusWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHUDCustomStatusWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHUDCustomStatusWidget"); }

	TWeakObjectPtr<APrimalCharacter, FWeakObjectPtr>& ForPrimalCharacterField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCharacter, FWeakObjectPtr>*>(this, "UHUDCustomStatusWidget.ForPrimalCharacter"); }
	FName& CanvasPanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDCustomStatusWidget.CanvasPanelName"); }
	FName& TitleWidgetTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDCustomStatusWidget.TitleWidgetTextBlockName"); }
	float& TitleWidgetTextBlockOrigFontSizeField() { return *GetNativePointerField<float*>(this, "UHUDCustomStatusWidget.TitleWidgetTextBlockOrigFontSize"); }
	FName& TextWidgetTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDCustomStatusWidget.TextWidgetTextBlockName"); }
	float& TextWidgetTextBlockNameOrigFontSizeField() { return *GetNativePointerField<float*>(this, "UHUDCustomStatusWidget.TextWidgetTextBlockNameOrigFontSize"); }
	FName& CustomTextContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDCustomStatusWidget.CustomTextContainerName"); }
	FName& ProgressWidgetProgressNameField() { return *GetNativePointerField<FName*>(this, "UHUDCustomStatusWidget.ProgressWidgetProgressName"); }
	FName& ImageBackgroundWidgetNameField() { return *GetNativePointerField<FName*>(this, "UHUDCustomStatusWidget.ImageBackgroundWidgetName"); }
	FName& IconWidgetNameField() { return *GetNativePointerField<FName*>(this, "UHUDCustomStatusWidget.IconWidgetName"); }
	FName& CustomRichTextContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDCustomStatusWidget.CustomRichTextContainerName"); }
	float& CustomRichTextScaleField() { return *GetNativePointerField<float*>(this, "UHUDCustomStatusWidget.CustomRichTextScale"); }
	UCanvasPanel*& CustomStatusCanvasField() { return *GetNativePointerField<UCanvasPanel**>(this, "UHUDCustomStatusWidget.CustomStatusCanvas"); }
	TArray<UUserWidget*, TSizedDefaultAllocator<32> >& WidgetRefsField() { return *GetNativePointerField<TArray<UUserWidget*, TSizedDefaultAllocator<32> >*>(this, "UHUDCustomStatusWidget.WidgetRefs"); }
	double& LastGarbageCollectionTimeField() { return *GetNativePointerField<double*>(this, "UHUDCustomStatusWidget.LastGarbageCollectionTime"); }
	UPrimalUserWidget* CreateHUDElementWidget(const FHUDElement& ElementInfo) { return NativeCall<UPrimalUserWidget*, const FHUDElement&>(this, "UHUDCustomStatusWidget.CreateHUDElementWidget(FHUDElement&)", ElementInfo); }
	static void SetHUDElementRichTextScale(FHUDElement& ElementInfo, float Scale) { NativeCall<void, FHUDElement&, float>(nullptr, "UHUDCustomStatusWidget.SetHUDElementRichTextScale(FHUDElement&,float)", ElementInfo, Scale); }
	void ApplyHUDElementSettings(UPrimalUserWidget* Widget, const FHUDElement& ElementInfo) { NativeCall<void, UPrimalUserWidget*, const FHUDElement&>(this, "UHUDCustomStatusWidget.ApplyHUDElementSettings(UPrimalUserWidget*,FHUDElement&)", Widget, ElementInfo); }
	static void SetHUDElementProgressBarScale(FHUDElement& ElementInfo, const UE::Math::TVector2<double>& NewScale) { NativeCall<void, FHUDElement&, const UE::Math::TVector2<double>&>(nullptr, "UHUDCustomStatusWidget.SetHUDElementProgressBarScale(FHUDElement&,UE::Math::TVector2<double>&)", ElementInfo, NewScale); }
	static void SetHUDElementSize(FHUDElement& ElementInfo, const UE::Math::TVector2<double>& NewSize) { NativeCall<void, FHUDElement&, const UE::Math::TVector2<double>&>(nullptr, "UHUDCustomStatusWidget.SetHUDElementSize(FHUDElement&,UE::Math::TVector2<double>&)", ElementInfo, NewSize); }
	static void SetHUDElementIconRotation(FHUDElement& ElementInfo, float NewAngle) { NativeCall<void, FHUDElement&, float>(nullptr, "UHUDCustomStatusWidget.SetHUDElementIconRotation(FHUDElement&,float)", ElementInfo, NewAngle); }
	static UHUDCustomStatusWidget* GetHUDElementRootWidget(APlayerController* PlayerController) { return NativeCall<UHUDCustomStatusWidget*, APlayerController*>(nullptr, "UHUDCustomStatusWidget.GetHUDElementRootWidget(APlayerController*)", PlayerController); }
	void DestroyAllWidgetsForOwner(unsigned int OwnerID) { NativeCall<void, unsigned int>(this, "UHUDCustomStatusWidget.DestroyAllWidgetsForOwner(unsignedint)", OwnerID); }
	static void SetHUDElementIconScale(FHUDElement& ElementInfo, const UE::Math::TVector2<double>& NewScale) { NativeCall<void, FHUDElement&, const UE::Math::TVector2<double>&>(nullptr, "UHUDCustomStatusWidget.SetHUDElementIconScale(FHUDElement&,UE::Math::TVector2<double>&)", ElementInfo, NewScale); }
	static void SetHUDElementLocation(FHUDElement& ElementInfo, const UE::Math::TVector2<double>& NewLocation) { NativeCall<void, FHUDElement&, const UE::Math::TVector2<double>&>(nullptr, "UHUDCustomStatusWidget.SetHUDElementLocation(FHUDElement&,UE::Math::TVector2<double>&)", ElementInfo, NewLocation); }
	bool IsHUDElementVisible(AActor* WidgetOwner, const FHUDElement& ElementInfo) { return NativeCall<bool, AActor*, const FHUDElement&>(this, "UHUDCustomStatusWidget.IsHUDElementVisible(AActor*,FHUDElement&)", WidgetOwner, ElementInfo); }
	static void SetHUDElementAnchor(FHUDElement& ElementInfo, const FAnchors& NewAnchor) { NativeCall<void, FHUDElement&, const FAnchors&>(nullptr, "UHUDCustomStatusWidget.SetHUDElementAnchor(FHUDElement&,FAnchors&)", ElementInfo, NewAnchor); }
	static void SetHUDElementImage(FHUDElement& ElementInfo, UTexture2D* NewIcon, bool bSetIcon, bool bSetProgressBarFillImage, bool bSetBackgroundImage) { NativeCall<void, FHUDElement&, UTexture2D*, bool, bool, bool>(nullptr, "UHUDCustomStatusWidget.SetHUDElementImage(FHUDElement&,UTexture2D*,bool,bool,bool)", ElementInfo, NewIcon, bSetIcon, bSetProgressBarFillImage, bSetBackgroundImage); }
	void AddToViewport(int ZOrder) { NativeCall<void, int>(this, "UHUDCustomStatusWidget.AddToViewport(int)", ZOrder); }
	static void SetHUDElementTextScale(FHUDElement& ElementInfo, float NewScale) { NativeCall<void, FHUDElement&, float>(nullptr, "UHUDCustomStatusWidget.SetHUDElementTextScale(FHUDElement&,float)", ElementInfo, NewScale); }
	static void SetUseGamepadIcon(FHUDElement& ElementInfo, bool use) { NativeCall<void, FHUDElement&, bool>(nullptr, "UHUDCustomStatusWidget.SetUseGamepadIcon(FHUDElement&,bool)", ElementInfo, use); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UHUDCustomStatusWidget.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	static void SetHUDElementProgress(FHUDElement& ElementInfo, float NewProgress) { NativeCall<void, FHUDElement&, float>(nullptr, "UHUDCustomStatusWidget.SetHUDElementProgress(FHUDElement&,float)", ElementInfo, NewProgress); }
	static void SetHUDElementVisibility(FHUDElement& ElementInfo, bool bIsVisible) { NativeCall<void, FHUDElement&, bool>(nullptr, "UHUDCustomStatusWidget.SetHUDElementVisibility(FHUDElement&,bool)", ElementInfo, bIsVisible); }
	static void SetHUDElementScale(FHUDElement& ElementInfo, const UE::Math::TVector2<double>& NewScale) { NativeCall<void, FHUDElement&, const UE::Math::TVector2<double>&>(nullptr, "UHUDCustomStatusWidget.SetHUDElementScale(FHUDElement&,UE::Math::TVector2<double>&)", ElementInfo, NewScale); }
};
