#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalItem.h"

struct UPrimalItem_Dye : UPrimalItem
{
public:
	UPrimalItem_Dye() = delete;
	~UPrimalItem_Dye() = delete;
	UPrimalItem_Dye(const UPrimalItem_Dye&) = delete;
	UPrimalItem_Dye& operator=(const UPrimalItem_Dye&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalItem_Dye"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalItem_Dye"); }

	int& CachedDinoColorSetIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.CachedDinoColorSetIndex"); }

	UMaterialInterface* GetHUDIconMaterial() { return NativeCall<UMaterialInterface*>(this, "UPrimalItem_Dye.GetHUDIconMaterial()"); }
	void Used(UPrimalItem* DestinationItem, int AdditionalData) { NativeCall<void, UPrimalItem*, int>(this, "UPrimalItem_Dye.Used(UPrimalItem*,int)", DestinationItem, AdditionalData); }
	bool CanUseWithItemSource(UPrimalItem* DestinationItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalItem_Dye.CanUseWithItemSource(UPrimalItem*)", DestinationItem); }
	bool CanUseWithItemDestination(UPrimalItem* SourceItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalItem_Dye.CanUseWithItemDestination(UPrimalItem*)", SourceItem); }
	void LocalUseItemOntoItem(AShooterPlayerController* ForPC, UPrimalItem* DestinationItem) { NativeCall<void, AShooterPlayerController*, UPrimalItem*>(this, "UPrimalItem_Dye.LocalUseItemOntoItem(AShooterPlayerController*,UPrimalItem*)", ForPC, DestinationItem); }
	void InitItemIcon() { NativeCall<void>(this, "UPrimalItem_Dye.InitItemIcon()"); }

	FLinearColor& DyeColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalItem_Dye.DyeColor"); }
};
