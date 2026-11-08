#pragma once
#include "BulkForward.h"


struct AStructurePreventionZoneVolume : AVolume
{
	// Fields

	TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& OnlyAllowStructuresOfTypeField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "AStructurePreventionZoneVolume.OnlyAllowStructuresOfType"); }
	float& StructureDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AStructurePreventionZoneVolume.StructureDamageMultiplier"); }
	TArray<FName, TSizedDefaultAllocator<32> >& ForcePreventStructuresWithTheseTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AStructurePreventionZoneVolume.ForcePreventStructuresWithTheseTags"); }
	TArray<TSoftClassPtr<AShooterWeapon>, TSizedDefaultAllocator<32> >& PreventUsingWeaponsField() { return *GetNativePointerField<TArray<TSoftClassPtr<AShooterWeapon>, TSizedDefaultAllocator<32> >*>(this, "AStructurePreventionZoneVolume.PreventUsingWeapons"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bOnlyPreventInPvE() { return { this, "AStructurePreventionZoneVolume.bOnlyPreventInPvE" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyPreventInDedicated() { return { this, "AStructurePreventionZoneVolume.bOnlyPreventInDedicated" }; }
	BitFieldValue<bool, unsigned __int32> bPreventAllStructures() { return { this, "AStructurePreventionZoneVolume.bPreventAllStructures" }; }
	BitFieldValue<bool, unsigned __int32> bDisabled() { return { this, "AStructurePreventionZoneVolume.bDisabled" }; }
	BitFieldValue<bool, unsigned __int32> bPreventionVolumeForcePreventFlyers() { return { this, "AStructurePreventionZoneVolume.bPreventionVolumeForcePreventFlyers" }; }
	BitFieldValue<bool, unsigned __int32> bPreventionVolumePreventsFlyers() { return { this, "AStructurePreventionZoneVolume.bPreventionVolumePreventsFlyers" }; }
	BitFieldValue<bool, unsigned __int32> bPreventionVolumeForceAllowFlyers() { return { this, "AStructurePreventionZoneVolume.bPreventionVolumeForceAllowFlyers" }; }
	BitFieldValue<bool, unsigned __int32> bPreventStructureDamageIncrease() { return { this, "AStructurePreventionZoneVolume.bPreventStructureDamageIncrease" }; }
	BitFieldValue<bool, unsigned __int32> bStructurePreventionOnly() { return { this, "AStructurePreventionZoneVolume.bStructurePreventionOnly" }; }
	BitFieldValue<bool, unsigned __int32> bOptionallyEnabled() { return { this, "AStructurePreventionZoneVolume.bOptionallyEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bForceEnabledWhenAllowCaveBuildingPVPIsFalse() { return { this, "AStructurePreventionZoneVolume.bForceEnabledWhenAllowCaveBuildingPVPIsFalse" }; }
	BitFieldValue<bool, unsigned __int32> bForceOnGenesis() { return { this, "AStructurePreventionZoneVolume.bForceOnGenesis" }; }
	BitFieldValue<bool, unsigned __int32> bIsMissionZone() { return { this, "AStructurePreventionZoneVolume.bIsMissionZone" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowUndergroundCheck() { return { this, "AStructurePreventionZoneVolume.bForceAllowUndergroundCheck" }; }

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("AStructurePreventionZoneVolume"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAStructurePreventionZoneVolume();
	static bool IsPointAllowed(UWorld* ForWorld, UE::Math::TVector<double>* AtPoint, bool bAllowInRegularPreventionVolumes, const APrimalStructure* Structure) { return NativeCall<bool, UWorld*, UE::Math::TVector<double>*, bool, const APrimalStructure*>(nullptr, "AStructurePreventionZoneVolume.IsPointAllowed(UWorld*,UE::Math::TVector<double>,bool,APrimalStructure*)", ForWorld, AtPoint, bAllowInRegularPreventionVolumes, Structure); }
	static bool IsWithinAnyVolume(UWorld* ForWorld, UE::Math::TVector<double>* AtPoint, bool bCheckDisabled, AStructurePreventionZoneVolume** TheVolume, bool bIsForDamageCheck, bool bIgnoreOptionalVolumes, float* OutDamageMultiplier) { return NativeCall<bool, UWorld*, UE::Math::TVector<double>*, bool, AStructurePreventionZoneVolume**, bool, bool, float*>(nullptr, "AStructurePreventionZoneVolume.IsWithinAnyVolume(UWorld*,UE::Math::TVector<double>,bool,AStructurePreventionZoneVolume**,bool,bool,float*)", ForWorld, AtPoint, bCheckDisabled, TheVolume, bIsForDamageCheck, bIgnoreOptionalVolumes, OutDamageMultiplier); }
	static AStructurePreventionZoneVolume* BPIsWithinAnyStructurePreventionVolume(UWorld* ForWorld, const UE::Math::TVector<double>& AtPoint, bool bCheckDisabled, bool bIsForDamageCheck, bool bIgnoreOptionalVolumes) { return NativeCall<AStructurePreventionZoneVolume*, UWorld*, const UE::Math::TVector<double>&, bool, bool, bool>(nullptr, "AStructurePreventionZoneVolume.BPIsWithinAnyStructurePreventionVolume(UWorld*,UE::Math::TVector<double>&,bool,bool,bool)", ForWorld, AtPoint, bCheckDisabled, bIsForDamageCheck, bIgnoreOptionalVolumes); }
	void PreLoadSaveGame() { NativeCall<void>(this, "AStructurePreventionZoneVolume.PreLoadSaveGame()"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "AStructurePreventionZoneVolume.EndPlay(EEndPlayReason::Type)", EndPlayReason); }

	int& OnlyAllowTeamToBuildField() { return *GetNativePointerField<int*>(this, "AStructurePreventionZoneVolume.OnlyAllowTeamToBuild"); }
	BitFieldValue<bool, unsigned __int32> bUseAlternativeInsideCheck() { return { this, "AStructurePreventionZoneVolume.bUseAlternativeInsideCheck"}; }
	static int GetBuildRestrictionAtPointForTeam(UWorld* ForWorld, UE::Math::TVector<double>* AtPoint, int Team) { if (!AtPoint) throw std::invalid_argument("Null native value parameter"); return NativeCall<int, UWorld *, UE :: Math :: TVector < double >, int>(nullptr, "AStructurePreventionZoneVolume.GetBuildRestrictionAtPointForTeam(UWorld*,UE::Math::TVector<double>,int)", ForWorld, *AtPoint, Team); }
	bool IsStructureAllowedInVolume(const APrimalStructure* Structure) { return NativeCall<bool, const APrimalStructure*>(this, "AStructurePreventionZoneVolume.IsStructureAllowedInVolume(APrimalStructure*)", Structure); }
	static bool IsStructureAllowed(const UWorld* ForWorld, const APrimalStructure* Structure) { return NativeCall<bool, const UWorld*, const APrimalStructure*>(nullptr, "AStructurePreventionZoneVolume.IsStructureAllowed(UWorld*,APrimalStructure*)", ForWorld, Structure); }
	void InitAddToActorList() { NativeCall<void>(this, "AStructurePreventionZoneVolume.InitAddToActorList()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AStructurePreventionZoneVolume.PostInitializeComponents()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AStructurePreventionZoneVolume"); }
};