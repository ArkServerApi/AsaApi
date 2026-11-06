#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalBuffPersistentData.h"

struct UPrimalBuffPersistentData_DragonHorn : UPrimalBuffPersistentData
{
public:
	UPrimalBuffPersistentData_DragonHorn() = delete;
	~UPrimalBuffPersistentData_DragonHorn() = delete;
	UPrimalBuffPersistentData_DragonHorn(const UPrimalBuffPersistentData_DragonHorn&) = delete;
	UPrimalBuffPersistentData_DragonHorn& operator=(const UPrimalBuffPersistentData_DragonHorn&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalBuffPersistentData_DragonHorn"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalBuffPersistentData_DragonHorn"); }

	unsigned int& DinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "UPrimalBuffPersistentData_DragonHorn.DinoID1"); }
	unsigned int& DinoID2Field() { return *GetNativePointerField<unsigned int*>(this, "UPrimalBuffPersistentData_DragonHorn.DinoID2"); }
	unsigned __int64& OwningPlayerDataIDField() { return *GetNativePointerField<unsigned __int64*>(this, "UPrimalBuffPersistentData_DragonHorn.OwningPlayerDataID"); }
	int& TargetingTeamField() { return *GetNativePointerField<int*>(this, "UPrimalBuffPersistentData_DragonHorn.TargetingTeam"); }
	double& NextLinkDragonTimeField() { return *GetNativePointerField<double*>(this, "UPrimalBuffPersistentData_DragonHorn.NextLinkDragonTime"); }
	double& NextFlyAwayTimeField() { return *GetNativePointerField<double*>(this, "UPrimalBuffPersistentData_DragonHorn.NextFlyAwayTime"); }
	double& NextComeHereTimeField() { return *GetNativePointerField<double*>(this, "UPrimalBuffPersistentData_DragonHorn.NextComeHereTime"); }
	double& NextGetMeTimeField() { return *GetNativePointerField<double*>(this, "UPrimalBuffPersistentData_DragonHorn.NextGetMeTime"); }
	int& QuickActionUseIndexField() { return *GetNativePointerField<int*>(this, "UPrimalBuffPersistentData_DragonHorn.QuickActionUseIndex"); }

	void ClearLink() { NativeCall<void>(this, "UPrimalBuffPersistentData_DragonHorn.ClearLink()"); }
	void ClearStoredPayload() { NativeCall<void>(this, "UPrimalBuffPersistentData_DragonHorn.ClearStoredPayload()"); }
	bool HasLinkedDinoID() { return NativeCall<bool>(this, "UPrimalBuffPersistentData_DragonHorn.HasLinkedDinoID()"); }
	bool HasCompleteStoredDragon() { return NativeCall<bool>(this, "UPrimalBuffPersistentData_DragonHorn.HasCompleteStoredDragon()"); }
	bool HasStoredDinoData() { return NativeCall<bool>(this, "UPrimalBuffPersistentData_DragonHorn.HasStoredDinoData()"); }

	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "UPrimalBuffPersistentData_DragonHorn.DinoName"); }
	FString& DinoNameInMapField() { return *GetNativePointerField<FString*>(this, "UPrimalBuffPersistentData_DragonHorn.DinoNameInMap"); }
	FString& OwningPlayerUniqueNetIdField() { return *GetNativePointerField<FString*>(this, "UPrimalBuffPersistentData_DragonHorn.OwningPlayerUniqueNetId"); }
	FCustomItemData& StoredDinoCustomDataField() { return *GetNativePointerField<FCustomItemData*>(this, "UPrimalBuffPersistentData_DragonHorn.StoredDinoCustomData"); }
};
