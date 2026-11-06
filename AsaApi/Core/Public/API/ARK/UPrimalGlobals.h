#pragma once
#include "BulkForward.h"


struct UPrimalGlobals : UObject
{
	// Fields

	UPrimalGameData*& PrimalGameDataField() { return *GetNativePointerField<UPrimalGameData**>(this, "UPrimalGlobals.PrimalGameData"); }
	UPrimalGameData*& PrimalGameDataOverrideField() { return *GetNativePointerField<UPrimalGameData**>(this, "UPrimalGlobals.PrimalGameDataOverride"); }
	// TSubclassOf<UShooterReplicationGraph>& DefaultReplicationGraphField() { return *GetNativePointerField<TSubclassOf<UShooterReplicationGraph>*>(this, "UPrimalGlobals.DefaultReplicationGraph"); }
		//TSoftClassPtr<UPrimalGameData>& PrimalGameDataAssetField() { return *GetNativePointerField<//TSoftClassPtr<UPrimalGameData>*>(this, "UPrimalGlobals.PrimalGameDataAsset"); }
		//TArray<//TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >& PrimalGameDataAssetExtendedField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGlobals.PrimalGameDataAssetExtended"); }
	UPrimalAssets*& AssetsField() { return *GetNativePointerField<UPrimalAssets**>(this, "UPrimalGlobals.Assets"); }
	// TSubclassOf<AStaticMeshActor>& RagdollKinematicActorClassField() { return *GetNativePointerField<TSubclassOf<AStaticMeshActor>*>(this, "UPrimalGlobals.RagdollKinematicActorClass"); }
	// TSubclassOf<ADestructibleBaseActor>& DefaultHarvestTreeClassField() { return *GetNativePointerField<TSubclassOf<ADestructibleBaseActor>*>(this, "UPrimalGlobals.DefaultHarvestTreeClass"); }
	// TSubclassOf<ADestructibleBaseActor>& DefaultHarvestBushClassField() { return *GetNativePointerField<TSubclassOf<ADestructibleBaseActor>*>(this, "UPrimalGlobals.DefaultHarvestBushClass"); }
	// TSubclassOf<UUI_GenericConfirmationDialog>& GlobalGenericConfirmationDialogField() { return *GetNativePointerField<TSubclassOf<UUI_GenericConfirmationDialog>*>(this, "UPrimalGlobals.GlobalGenericConfirmationDialog"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >& ExtraResourcesField() { return *GetNativePointerField<TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGlobals.ExtraResources"); }
	bool& bAllowNonDedicatedHostField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bAllowNonDedicatedHost"); }
	TArray<FString, TSizedDefaultAllocator<32> >& UIOnlyShowMapFileNamesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalGlobals.UIOnlyShowMapFileNames"); }
	TArray<FString, TSizedDefaultAllocator<32> >& UIOnlyShowModIDsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalGlobals.UIOnlyShowModIDs"); }
	FString& CreditStringField() { return *GetNativePointerField<FString*>(this, "UPrimalGlobals.CreditString"); }
	FLinearColor& AlphaMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobals.AlphaMissionColor"); }
	FLinearColor& BetaMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobals.BetaMissionColor"); }
	FLinearColor& GammaMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobals.GammaMissionColor"); }
	FLinearColor& MissionCompleteMultiUseWheelTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobals.MissionCompleteMultiUseWheelTextColor"); }
	UFont*& BigFont_OfflineField() { return *GetNativePointerField<UFont**>(this, "UPrimalGlobals.BigFont_Offline"); }
	UFont*& NormalFont_OfflineField() { return *GetNativePointerField<UFont**>(this, "UPrimalGlobals.NormalFont_Offline"); }
	UFont*& SmallFont_OfflineField() { return *GetNativePointerField<UFont**>(this, "UPrimalGlobals.SmallFont_Offline"); }
	//TArray<TSoftObjectPtr<UFont>, TSizedDefaultAllocator<32> >& OfflineFontArrayField() { return *GetNativePointerField<//TArray<TSoftObjectPtr<UFont>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGlobals.OfflineFontArray"); }
// TSubclassOf<UPrimalUI>& SpawnMenuUITemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalUI>*>(this, "UPrimalGlobals.SpawnMenuUITemplate"); }
// TSubclassOf<UUI_CustomOverlay>& CustomOverlayClassField() { return *GetNativePointerField<TSubclassOf<UUI_CustomOverlay>*>(this, "UPrimalGlobals.CustomOverlayClass"); }
	TArray<USoundClass*, TSizedDefaultAllocator<32> >& CoreSoundClassesField() { return *GetNativePointerField<TArray<USoundClass*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGlobals.CoreSoundClasses"); }
	USoundClass*& PS5GamepadSoundClassField() { return *GetNativePointerField<USoundClass**>(this, "UPrimalGlobals.PS5GamepadSoundClass"); }
	USoundClass*& PS5GamepadHandsSoundClassField() { return *GetNativePointerField<USoundClass**>(this, "UPrimalGlobals.PS5GamepadHandsSoundClass"); }
	TObjectPtr<USoundSubmix>& PS5GamepadSubmixField() { return *GetNativePointerField<TObjectPtr<USoundSubmix>*>(this, "UPrimalGlobals.PS5GamepadSubmix"); }
	UMaterialInterface*& DefaultRenderTargetMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGlobals.DefaultRenderTargetMaterial"); }
	UTriggerEffectLibrary*& TriggerEffectLibraryField() { return *GetNativePointerField<UTriggerEffectLibrary**>(this, "UPrimalGlobals.TriggerEffectLibrary"); }
	bool& bGameMediaLoadedField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bGameMediaLoaded"); }
	bool& bContentStrippedForDedicatedField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bContentStrippedForDedicated"); }
	unsigned __int64& LoadedTotalConversionField() { return *GetNativePointerField<unsigned __int64*>(this, "UPrimalGlobals.LoadedTotalConversion"); }
	int& SavingFilesCounterField() { return *GetNativePointerField<int*>(this, "UPrimalGlobals.SavingFilesCounter"); }
	TDelegate<void __cdecl(bool), FDefaultDelegateUserPolicy>& CompletedDialogField() { return *GetNativePointerField<TDelegate<void __cdecl(bool), FDefaultDelegateUserPolicy>*>(this, "UPrimalGlobals.CompletedDialog"); }
	FStreamableManager& StreamableManagerField() { return *GetNativePointerField<FStreamableManager*>(this, "UPrimalGlobals.StreamableManager"); }
	UMaterialInstanceConstant*& VertexVizField() { return *GetNativePointerField<UMaterialInstanceConstant**>(this, "UPrimalGlobals.VertexViz"); }
	FOpenColorIODisplayConfiguration& DefaultOpenColorIODisplayConfigurationField() { return *GetNativePointerField<FOpenColorIODisplayConfiguration*>(this, "UPrimalGlobals.DefaultOpenColorIODisplayConfiguration"); }
	FCachedDBAccessor& CachedDBsField() { return *GetNativePointerField<FCachedDBAccessor*>(this, "UPrimalGlobals.CachedDBs"); }

	// Bitfields


	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUPrimalGlobals();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalGlobals"); }
	//void ~UPrimalGlobals() { NativeCall<void>(this, "UPrimalGlobals.~UPrimalGlobals()"); }
	//void UPrimalGlobals(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "UPrimalGlobals.UPrimalGlobals(FObjectInitializer*)", ObjectInitializer); }
	void AsyncLoadGameMedia(bool LoadForConsoleDedicated, bool bIsTCSwap, bool bForceSynchronous) { NativeCall<void, bool, bool, bool>(this, "UPrimalGlobals.AsyncLoadGameMedia(bool,bool,bool)", LoadForConsoleDedicated, bIsTCSwap, bForceSynchronous); }
	void UpdateOfflineFonts() { NativeCall<void>(this, "UPrimalGlobals.UpdateOfflineFonts()"); }
	void FinishLoadGameMedia() { NativeCall<void>(this, "UPrimalGlobals.FinishLoadGameMedia()"); }
	void FinishedLoadingGameMedia() { NativeCall<void>(this, "UPrimalGlobals.FinishedLoadingGameMedia()"); }
	void LoadNextTick(UWorld* ForWorld, bool bWithLoadForDedicated) { NativeCall<void, UWorld*, bool>(this, "UPrimalGlobals.LoadNextTick(UWorld*,bool)", ForWorld, bWithLoadForDedicated); }
	void OnConfirmationDialogClosed(bool bAccept) { NativeCall<void, bool>(this, "UPrimalGlobals.OnConfirmationDialogClosed(bool)", bAccept); }
	static AStaticMeshActor* GetRagdollKinematicActor(UWorld* World) { return NativeCall<AStaticMeshActor*, UWorld*>(nullptr, "UPrimalGlobals.GetRagdollKinematicActor(UWorld*)", World); }
	static ADayCycleManager* GetDayCycleManager(UWorld* World) { return NativeCall<ADayCycleManager*, UWorld*>(nullptr, "UPrimalGlobals.GetDayCycleManager(UWorld*)", World); }
	static ASOTFNotification* GetSOTFNotificationManager(UWorld* World) { return NativeCall<ASOTFNotification*, UWorld*>(nullptr, "UPrimalGlobals.GetSOTFNotificationManager(UWorld*)", World); }
	static bool IsAudibleSimple(UAudioComponent* audioComponent, const UE::Math::TVector<double>* location) { return NativeCall<bool, UAudioComponent*, const UE::Math::TVector<double>*>(nullptr, "UPrimalGlobals.IsAudibleSimple(UAudioComponent*,UE::Math::TVector<double>&)", audioComponent, location); }
	static bool SimpleTeleportTo(AActor* ForActor, const UE::Math::TVector<double>* DestLocation, const UE::Math::TRotator<double>* DestRotation) { return NativeCall<bool, AActor*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(nullptr, "UPrimalGlobals.SimpleTeleportTo(AActor*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", ForActor, DestLocation, DestRotation); }
	static UClass* AttemptSlowClassDLO(const FString* ClassName) { return NativeCall<UClass*, const FString*>(nullptr, "UPrimalGlobals.AttemptSlowClassDLO(FString&)", ClassName); }

	bool& bAllowSingleplayerField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bAllowSingleplayer"); }
	bool& bTotalConversionShowUnofficialServersField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bTotalConversionShowUnofficialServers"); }
	bool& UseLangOfflineField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.UseLangOffline"); }
	bool& bStartedAsyncLoadField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bStartedAsyncLoad"); }
	bool& bLoadForDedicatedField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bLoadForDedicated"); }

	UPrimalGameData*& PassivePrimalGameDataField() { return *GetNativePointerField<UPrimalGameData**>(this, "UPrimalGlobals.PassivePrimalGameData"); }
	static double Conv_FloatToDouble(float InFloat) { return NativeCall<double, float>(nullptr, "UPrimalGlobals.Conv_FloatToDouble(float)", InFloat); }
	static AShooterPlayerCameraManager* GetShooterPlayerCameraManager(UWorld* World) { return NativeCall<AShooterPlayerCameraManager*, UWorld*>(nullptr, "UPrimalGlobals.GetShooterPlayerCameraManager(UWorld*)", World); }
	static bool EqualEqual_DoubleDouble(double A, double B) { return NativeCall<bool, double, double>(nullptr, "UPrimalGlobals.EqualEqual_DoubleDouble(double,double)", A, B); }
	static void FlushLevelStreamingOnNextCameraUpdate(UWorld* World) { NativeCall<void, UWorld*>(nullptr, "UPrimalGlobals.FlushLevelStreamingOnNextCameraUpdate(UWorld*)", World); }
	static float Conv_DoubleToFloat(double InDouble) { return NativeCall<float, double>(nullptr, "UPrimalGlobals.Conv_DoubleToFloat(double)", InDouble); }
	static double Subtract_DoubleDouble(double A, double B) { return NativeCall<double, double, double>(nullptr, "UPrimalGlobals.Subtract_DoubleDouble(double,double)", A, B); }
	void ShowConfirmationDialog(const FString& TitleText, const FString& MessageText, bool isJustOKBox) { NativeCall<void, const FString&, const FString&, bool>(this, "UPrimalGlobals.ShowConfirmationDialog(FString&,FString&,bool)", TitleText, MessageText, isJustOKBox); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UPrimalGlobals.Serialize(FArchive&)", Ar); }
	static void DoPrivilegesNotification(UWorld* world, bool multiplayer) { NativeCall<void, UWorld*, bool>(nullptr, "UPrimalGlobals.DoPrivilegesNotification(UWorld*,bool)", world, multiplayer); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalGlobals"); }
};