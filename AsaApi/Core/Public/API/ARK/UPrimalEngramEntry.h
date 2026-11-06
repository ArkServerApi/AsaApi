#pragma once
#include "BulkForward.h"


struct UPrimalEngramEntry : UObject
{
	// Fields

	int& RequiredCharacterLevelField() { return *GetNativePointerField<int*>(this, "UPrimalEngramEntry.RequiredCharacterLevel"); }
	int& RequiredEngramPointsField() { return *GetNativePointerField<int*>(this, "UPrimalEngramEntry.RequiredEngramPoints"); }
	TSubclassOf<UPrimalItem>& BluePrintEntryField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalEngramEntry.BluePrintEntry"); }
	//FString& ExtraEngramDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalEngramEntry.ExtraEngramDescription"); }
	//TArray<FEngramEntries, TSizedDefaultAllocator<32> >& EngramRequirementSetsField() { return *GetNativePointerField<TArray<FEngramEntries, TSizedDefaultAllocator<32> >*>(this, "UPrimalEngramEntry.EngramRequirementSets"); }
	int& MyEngramIndexField() { return *GetNativePointerField<int*>(this, "UPrimalEngramEntry.MyEngramIndex"); }
	//TEnumAsByte<enum EEngramGroup::Type>& EngramGroupField() { return *GetNativePointerField<TEnumAsByte<enum EEngramGroup::Type>*>(this, "UPrimalEngramEntry.EngramGroup"); }
	//TEnumAsByte<enum EEngramCategory::Type>& EngramCategoryField() { return *GetNativePointerField<TEnumAsByte<enum EEngramCategory::Type>*>(this, "UPrimalEngramEntry.EngramCategory"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bGiveBlueprintToPlayerInventoryField() { return { this, "UPrimalEngramEntry.bGiveBlueprintToPlayerInventory" }; }
	BitFieldValue<bool, unsigned __int32> bCanBeManuallyUnlockedField() { return { this, "UPrimalEngramEntry.bCanBeManuallyUnlocked" }; }
	BitFieldValue<bool, unsigned __int32> bForceIsTekEngramField() { return { this, "UPrimalEngramEntry.bForceIsTekEngram" }; }
	BitFieldValue<bool, unsigned __int32> AutoUnlockEngramField() { return { this, "UPrimalEngramEntry.AutoUnlockEngram" }; }

	// Functions

	int GetEngramFilterType() { return NativeCall<int>(this, "UPrimalEngramEntry.GetEngramFilterType()"); }
	//static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(this, "UPrimalEngramEntry.GetPrivateStaticClass()"); }
	int GetRequiredEngramPoints() { return NativeCall<int>(this, "UPrimalEngramEntry.GetRequiredEngramPoints()"); }
	//static UClass* StaticClass() { return NativeCall<UClass*>(this, "UPrimalEngramEntry.StaticClass()"); }
	int GetRequiredLevel() { return NativeCall<int>(this, "UPrimalEngramEntry.GetRequiredLevel()"); }
	//FString GetEngramDescription(AShooterPlayerState* aPlayerState) { return NativeCall<FString, AShooterPlayerState*>(this, "UPrimalEngramEntry.GetEngramDescription(AShooterPlayerState*)", aPlayerState); }
	//FString GetEntryString() { return NativeCall<FString>(this, "UPrimalEngramEntry.GetEntryString()"); }
	//FString GetEngramName() { return NativeCall<FString>(this, "UPrimalEngramEntry.GetEngramName()"); }
	bool UseEngramRequirementSets() { return NativeCall<bool>(this, "UPrimalEngramEntry.UseEngramRequirementSets()"); }
	//UTexture2D* GetEntryIcon(UObject* AssociatedDataObject, bool bIsEnabled) { return NativeCall<UTexture2D*, UObject*, bool>(this, "UPrimalEngramEntry.GetEntryIcon(UObject*,bool)", AssociatedDataObject, bIsEnabled); }
	//static void StaticRegisterNativesUPrimalEngramEntry() { NativeCall<void>(this, "UPrimalEngramEntry.StaticRegisterNativesUPrimalEngramEntry()"); }
	bool MeetsEngramRequirements(AShooterPlayerState* aPlayerState, bool bOnlyCheckLevel, bool bDontCheckEngramPreRequirements) { return NativeCall<bool, AShooterPlayerState*, bool, bool>(this, "UPrimalEngramEntry.MeetsEngramRequirements(AShooterPlayerState*,bool,bool)", aPlayerState, bOnlyCheckLevel, bDontCheckEngramPreRequirements); }
	//void GetAllChainedPreReqs(AShooterPlayerState* aPlayerState, TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >& TestedEntries) { NativeCall<void, AShooterPlayerState*, TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >&>(this, "UPrimalEngramEntry.GetAllChainedPreReqs(AShooterPlayerState*,TArray<TSubclassOf<UPrimalEngramEntry>,TSizedDefaultAllocator<32>>&)", aPlayerState, TestedEntries); }
	//int GetChainRequiredEngramPoints(TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >& TestedEntries) { return NativeCall<int, TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >&>(this, "UPrimalEngramEntry.GetChainRequiredEngramPoints(TArray<TSubclassOf<UPrimalEngramEntry>,TSizedDefaultAllocator<32>>&)", TestedEntries); }
	bool GetDownscaleWrappedTextToFit() { return NativeCall<bool>(this, "UPrimalEngramEntry.GetDownscaleWrappedTextToFit()"); }
	bool MeetsEngramChainRequirements(AShooterPlayerState* aPlayerState) { return NativeCall<bool, AShooterPlayerState*>(this, "UPrimalEngramEntry.MeetsEngramChainRequirements(AShooterPlayerState*)", aPlayerState); }
	UObject* _getUObject()const { return NativeCall<UObject*>(this, "UPrimalEngramEntry._getUObject()"); }
	void ClearHiddenEngramRequirements() { NativeCall<void>(this, "UPrimalEngramEntry.ClearHiddenEngramRequirements()"); }
	UObject* GetObject() { return NativeCall<UObject*>(this, "UPrimalEngramEntry.GetObject()"); }

	double& LastTimeCheckedRequirementsField() { return *GetNativePointerField<double*>(this, "UPrimalEngramEntry.LastTimeCheckedRequirements"); }
	bool& bMeetsDLCRequirementsCachedField() { return *GetNativePointerField<bool*>(this, "UPrimalEngramEntry.bMeetsDLCRequirementsCached"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalEngramEntry"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalEngramEntry"); }

	FString& ExtraEngramDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalEngramEntry.ExtraEngramDescription"); }
	TEnumAsByte<EEngramGroup::Type>& EngramGroupField() { return *GetNativePointerField<TEnumAsByte<EEngramGroup::Type>*>(this, "UPrimalEngramEntry.EngramGroup"); }
	TEnumAsByte<EEngramCategory::Type>& EngramCategoryField() { return *GetNativePointerField<TEnumAsByte<EEngramCategory::Type>*>(this, "UPrimalEngramEntry.EngramCategory"); }
	BitFieldValue<bool, unsigned __int32> bGiveBlueprintToPlayerInventory() { return { this, "UPrimalEngramEntry.bGiveBlueprintToPlayerInventory"}; }
	BitFieldValue<bool, unsigned __int32> bCanBeManuallyUnlocked() { return { this, "UPrimalEngramEntry.bCanBeManuallyUnlocked"}; }
	BitFieldValue<bool, unsigned __int32> bForceIsTekEngram() { return { this, "UPrimalEngramEntry.bForceIsTekEngram"}; }
	BitFieldValue<bool, unsigned __int32> AutoUnlockEngram() { return { this, "UPrimalEngramEntry.AutoUnlockEngram"}; }
	FString* GetEngramName(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalEngramEntry.GetEngramName()", result); }
	FString* GetEngramDescription(FString* result, AShooterPlayerState* aPlayerState) { return NativeCall<FString*, FString*, AShooterPlayerState*>(this, "UPrimalEngramEntry.GetEngramDescription(AShooterPlayerState*)", result, aPlayerState); }
	FString* GetEntryString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalEngramEntry.GetEntryString()", result); }
	UTexture2D* GetEntryIcon(UObject* AssociatedDataObject, bool bIsEnabled) { return NativeCall<UTexture2D*, UObject*, bool>(this, "UPrimalEngramEntry.GetEntryIcon(UObject*,bool)", AssociatedDataObject, bIsEnabled); }
};