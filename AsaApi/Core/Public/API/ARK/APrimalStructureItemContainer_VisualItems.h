#pragma once
#include "BulkForward.h"



struct APrimalStructureItemContainer_VisualItems : APrimalStructureItemContainer
{
    // Fields

    UStaticMeshComponent*& MyExtraStaticMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureItemContainer_VisualItems.MyExtraStaticMesh"); }
    UStaticMesh*& ExtraStaticMesh_NoItemsField() { return *GetNativePointerField<UStaticMesh**>(this, "APrimalStructureItemContainer_VisualItems.ExtraStaticMesh_NoItems"); }
    UStaticMesh*& ExtraStaticMesh_HasItemsField() { return *GetNativePointerField<UStaticMesh**>(this, "APrimalStructureItemContainer_VisualItems.ExtraStaticMesh_HasItems"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& ItemClassesToCheckField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_VisualItems.ItemClassesToCheck"); }
    bool& bIgnoreEngramsField() { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer_VisualItems.bIgnoreEngrams"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bHasItems() { return { this, "APrimalStructureItemContainer_VisualItems.bHasItems" }; }
    BitFieldValue<bool, unsigned __int32> bDoItemVisuals() { return { this, "APrimalStructureItemContainer_VisualItems.bDoItemVisuals" }; }
    BitFieldValue<bool, unsigned __int32> bPreviousHasItems() { return { this, "APrimalStructureItemContainer_VisualItems.bPreviousHasItems" }; }

    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureItemContainer_VisualItems"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureItemContainer_VisualItems();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer_VisualItems.BeginPlay()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_VisualItems.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void UpdateVisuals() { NativeCall<void>(this, "APrimalStructureItemContainer_VisualItems.UpdateVisuals()"); }
    void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureItemContainer_VisualItems.NotifyItemRemoved(UPrimalItem*)", anItem); }
    void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "APrimalStructureItemContainer_VisualItems.NotifyItemAdded(UPrimalItem*,bool)", anItem, bEquipItem); }

	bool& bIgnoreBlueprintsField() { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer_VisualItems.bIgnoreBlueprints"); }

	void BPUpdateItemVisuals() { NativeCall<void>(this, "APrimalStructureItemContainer_VisualItems.BPUpdateItemVisuals()"); }
	void OnRep_HasItems() { NativeCall<void>(this, "APrimalStructureItemContainer_VisualItems.OnRep_HasItems()"); }
	UMeshComponent* GetMeshComponentForActivateMaterials() { return NativeCall<UMeshComponent*>(this, "APrimalStructureItemContainer_VisualItems.GetMeshComponentForActivateMaterials()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureItemContainer_VisualItems"); }
};