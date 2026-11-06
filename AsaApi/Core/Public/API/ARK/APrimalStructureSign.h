#pragma once
#include "BulkForward.h"


struct APrimalStructureSign : APrimalStructure
{
    // Fields

    FString& SignTextField() { return *GetNativePointerField<FString*>(this, "APrimalStructureSign.SignText"); }
    float& SignWidthField() { return *GetNativePointerField<float*>(this, "APrimalStructureSign.SignWidth"); }
    int& MaxNumberofCharactersField() { return *GetNativePointerField<int*>(this, "APrimalStructureSign.MaxNumberofCharacters"); }
    float& MinFontSizeField() { return *GetNativePointerField<float*>(this, "APrimalStructureSign.MinFontSize"); }
    float& DefaultScaleField() { return *GetNativePointerField<float*>(this, "APrimalStructureSign.DefaultScale"); }
    //UTextRenderComponent*& TextRenderField() { return *GetNativePointerField<UTextRenderComponent**>(this, "APrimalStructureSign.TextRender"); }
    TObjectPtr<UTexture2D>& SetSignTextIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSign.SetSignTextIcon"); }
    long double& LastSignNamingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureSign.LastSignNamingTime"); }

    // Bitfields


    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureSign"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureSign();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureSign.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureSign.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureSign.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSign.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureSign.BeginPlay()"); }
    void OnBlockListUpdated(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureSign.OnBlockListUpdated(AShooterPlayerController*)", PC); }
    void ProcessEditText(AShooterPlayerController* ForPC, const FString* TextToUse, bool __formal) { NativeCall<void, AShooterPlayerController*, const FString*, bool>(this, "APrimalStructureSign.ProcessEditText(AShooterPlayerController*,FString&,bool)", ForPC, TextToUse, __formal); }
    void RefreshStructureColors(UMeshComponent* ForceRefreshComponent) { NativeCall<void, UMeshComponent*>(this, "APrimalStructureSign.RefreshStructureColors(UMeshComponent*)", ForceRefreshComponent); }

	float& SignTextScaleField() { return *GetNativePointerField<float*>(this, "APrimalStructureSign.SignTextScale"); }
	float& SignHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureSign.SignHeight"); }
	float& MinTextScaleField() { return *GetNativePointerField<float*>(this, "APrimalStructureSign.MinTextScale"); }
	float& MaxTextScaleField() { return *GetNativePointerField<float*>(this, "APrimalStructureSign.MaxTextScale"); }

	UTextRenderComponent*& TextRenderField() { return *GetNativePointerField<UTextRenderComponent**>(this, "APrimalStructureSign.TextRender"); }
	BitFieldValue<bool, unsigned __int32> bUseBPNotifyUpdatedSignText() { return { this, "APrimalStructureSign.bUseBPNotifyUpdatedSignText"}; }
	BitFieldValue<bool, unsigned __int32> bIgnoreMultipleLines() { return { this, "APrimalStructureSign.bIgnoreMultipleLines"}; }
	BitFieldValue<bool, unsigned __int32> bCanAdjustTextScale() { return { this, "APrimalStructureSign.bCanAdjustTextScale"}; }
	void MultiUpdateSignTextScale(float newScale) { NativeCall<void, float>(this, "APrimalStructureSign.MultiUpdateSignTextScale(float)", newScale); }
	void UpdatedSignText(UTextRenderComponent* TextRenderComponent) { NativeCall<void, UTextRenderComponent*>(this, "APrimalStructureSign.UpdatedSignText(UTextRenderComponent*)", TextRenderComponent); }
	void MultiUpdateSignTextScale_Implementation(float newScale) { NativeCall<void, float>(this, "APrimalStructureSign.MultiUpdateSignTextScale_Implementation(float)", newScale); }
	void OnRep_SignText(const FString& PreviousSignText) { NativeCall<void, const FString&>(this, "APrimalStructureSign.OnRep_SignText(FString&)", PreviousSignText); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureSign"); }
};