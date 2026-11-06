#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UInventoryArkCreaturesPanel : public UPrimalUI
{
public:
	UInventoryArkCreaturesPanel() = delete;
	~UInventoryArkCreaturesPanel() = delete;
	UInventoryArkCreaturesPanel(const UInventoryArkCreaturesPanel&) = delete;
	UInventoryArkCreaturesPanel& operator=(const UInventoryArkCreaturesPanel&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UInventoryArkCreaturesPanel"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UInventoryArkCreaturesPanel"); }

	float& updateTimerField() { return *GetNativePointerField<float*>(this, "UInventoryArkCreaturesPanel.updateTimer"); }
	FName& UploadedCreatureListNameField() { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.UploadedCreatureListName"); }
	FName& LocalCreatureListNameField() { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.LocalCreatureListName"); }
	FName& UploadCreatureButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.UploadCreatureButtonName"); }
	FName& DownloadCreatureButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.DownloadCreatureButtonName"); }
	UUI_Inventory*& InventoryUIField() { return *GetNativePointerField<UUI_Inventory**>(this, "UInventoryArkCreaturesPanel.InventoryUI"); }
	UScrollBox*& LocalCreatureListField() { return *GetNativePointerField<UScrollBox**>(this, "UInventoryArkCreaturesPanel.LocalCreatureList"); }
	UScrollBox*& UploadedCreatureListField() { return *GetNativePointerField<UScrollBox**>(this, "UInventoryArkCreaturesPanel.UploadedCreatureList"); }
	UButton*& DownloadCreatureButtonField() { return *GetNativePointerField<UButton**>(this, "UInventoryArkCreaturesPanel.DownloadCreatureButton"); }
	UButton*& UploadCreatureButtonField() { return *GetNativePointerField<UButton**>(this, "UInventoryArkCreaturesPanel.UploadCreatureButton"); }
	FTimerHandle& ProcessArkTributeExpirationTimesHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UInventoryArkCreaturesPanel.ProcessArkTributeExpirationTimesHandle"); }
	FARKTributeDino& LastDownloadedDinoField() { return *GetNativePointerField<FARKTributeDino*>(this, "UInventoryArkCreaturesPanel.LastDownloadedDino"); }
	bool& bDownloadingDinoField() { return *GetNativePointerField<bool*>(this, "UInventoryArkCreaturesPanel.bDownloadingDino"); }
	void ClickedButton(UWidget* clickedButton) { NativeCall<void, UWidget*>(this, "UInventoryArkCreaturesPanel.ClickedButton(UWidget*)", clickedButton); }
	void DownloadSelectedDino() { NativeCall<void>(this, "UInventoryArkCreaturesPanel.DownloadSelectedDino()"); }
	void Show() { NativeCall<void>(this, "UInventoryArkCreaturesPanel.Show()"); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UInventoryArkCreaturesPanel.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void OnUploadedDinosChanged() { NativeCall<void>(this, "UInventoryArkCreaturesPanel.OnUploadedDinosChanged()"); }
	void GetTamedDinos() { NativeCall<void>(this, "UInventoryArkCreaturesPanel.GetTamedDinos()"); }
	void UploadedDinoSlotButtonSelected(UWidget* theWidget) { NativeCall<void, UWidget*>(this, "UInventoryArkCreaturesPanel.UploadedDinoSlotButtonSelected(UWidget*)", theWidget); }
	void OnDownloadDinoRequestFinished(bool Success) { NativeCall<void, bool>(this, "UInventoryArkCreaturesPanel.OnDownloadDinoRequestFinished(bool)", Success); }
	void ConfirmationDialogAccepted() { NativeCall<void>(this, "UInventoryArkCreaturesPanel.ConfirmationDialogAccepted()"); }
	void PopulateDinoList() { NativeCall<void>(this, "UInventoryArkCreaturesPanel.PopulateDinoList()"); }
	void ProcessArkTributeExpirationTimes() { NativeCall<void>(this, "UInventoryArkCreaturesPanel.ProcessArkTributeExpirationTimes()"); }
	void Init(UUI_Inventory* InInventory) { NativeCall<void, UUI_Inventory*>(this, "UInventoryArkCreaturesPanel.Init(UUI_Inventory*)", InInventory); }
	void LocalDinoSlotButtonSelected(UWidget* theWidget) { NativeCall<void, UWidget*>(this, "UInventoryArkCreaturesPanel.LocalDinoSlotButtonSelected(UWidget*)", theWidget); }
	UPrimalUI* GetParentPrimalUI() { return NativeCall<UPrimalUI*>(this, "UInventoryArkCreaturesPanel.GetParentPrimalUI()"); }
	void GetUploadedDinos() { NativeCall<void>(this, "UInventoryArkCreaturesPanel.GetUploadedDinos()"); }
};
