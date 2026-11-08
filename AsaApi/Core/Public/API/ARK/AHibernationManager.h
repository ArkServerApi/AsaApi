#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AHibernationManager : public AActor
{
public:
	AHibernationManager() = delete;
	~AHibernationManager() = delete;
	AHibernationManager(const AHibernationManager&) = delete;
	AHibernationManager& operator=(const AHibernationManager&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AHibernationManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AHibernationManager"); }

	int& NumHibernatedStructureEntitiesField() { return *GetNativePointerField<int*>(this, "AHibernationManager.NumHibernatedStructureEntities"); }
	TArray<FName, TSizedDefaultAllocator<32> >& SharedNameTableField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AHibernationManager.SharedNameTable"); }
	TArray<FHibernationEntity*, TSizedDefaultAllocator<32> >& EmptyArray_FHibernationEntityField() { return *GetNativePointerField<TArray<FHibernationEntity*, TSizedDefaultAllocator<32> >*>(this, "AHibernationManager.EmptyArray_FHibernationEntity"); }
	bool Awaken(FHibernationEntity* InEntity) { return NativeCall<bool, FHibernationEntity*>(this, "AHibernationManager.Awaken(FHibernationEntity*)", InEntity); }
	int CountStructureEntitiesInBox(const UE::Math::TVector<double>& Origin, const UE::Math::TVector<double>& Extent, bool bCoreOnly) { return NativeCall<int, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, bool>(this, "AHibernationManager.CountStructureEntitiesInBox(UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", Origin, Extent, bCoreOnly); }
	bool AwakenLatentSpawn(FHibernationEntity* InEntity) { return NativeCall<bool, FHibernationEntity*>(this, "AHibernationManager.AwakenLatentSpawn(FHibernationEntity*)", InEntity); }
	int RemoveAllNonStructureEntities() { return NativeCall<int>(this, "AHibernationManager.RemoveAllNonStructureEntities()"); }
	void BeginPlay() { NativeCall<void>(this, "AHibernationManager.BeginPlay()"); }
	bool HasStructureEntitiesInBox(const UE::Math::TVector<double>& Origin, const UE::Math::TVector<double>& Extent, bool bCoreOnly) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, bool>(this, "AHibernationManager.HasStructureEntitiesInBox(UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", Origin, Extent, bCoreOnly); }
	void BeginDestroy() { NativeCall<void>(this, "AHibernationManager.BeginDestroy()"); }
	int AwakenSupportChainForID(unsigned int StartStructureID, int MaxToAwaken, int* OutLinkedStructuresRestored) { return NativeCall<int, unsigned int, int, int*>(this, "AHibernationManager.AwakenSupportChainForID(unsignedint,int,int*)", StartStructureID, MaxToAwaken, OutLinkedStructuresRestored); }
	FHibernationEntity* Hibernate(AActor* InActor) { return NativeCall<FHibernationEntity*, AActor*>(this, "AHibernationManager.Hibernate(AActor*)", InActor); }
	void SerializeForSaveFile(FArchive& Ar, bool bDontActuallyUse) { NativeCall<void, FArchive&, bool>(this, "AHibernationManager.SerializeForSaveFile(FArchive&,bool)", Ar, bDontActuallyUse); }
	void InjectLatentSpawn(FLatentSpawnParams& Params, ANPCZoneManager* FromZone, const FPrimalDinoDBEntry* Entry) { NativeCall<void, FLatentSpawnParams&, ANPCZoneManager*, const FPrimalDinoDBEntry*>(this, "AHibernationManager.InjectLatentSpawn(FLatentSpawnParams&,ANPCZoneManager*,FPrimalDinoDBEntry*)", Params, FromZone, Entry); }
	void FailedLoad() { NativeCall<void>(this, "AHibernationManager.FailedLoad()"); }
	void AwakenActorsForPlayers(bool bSyncLoad) { NativeCall<void, bool>(this, "AHibernationManager.AwakenActorsForPlayers(bool)", bSyncLoad); }
	int RestoreLinkedStructures(APrimalStructure* Live, TArray<unsigned int, TSizedDefaultAllocator<32> >& OutNeighborIDs) { return NativeCall<int, APrimalStructure*, TArray<unsigned int, TSizedDefaultAllocator<32> >&>(this, "AHibernationManager.RestoreLinkedStructures(APrimalStructure*,TArray<unsignedint,TSizedDefaultAllocator<32>>&)", Live, OutNeighborIDs); }
	int AwakenAllStructures(int& OutFailed) { return NativeCall<int, int&>(this, "AHibernationManager.AwakenAllStructures(int&)", OutFailed); }
	int RetagStructureEntitiesTeam(int OldTeam, int NewTeam, int RequireOwningPlayerID, int* OutAwakened) { return NativeCall<int, int, int, int, int*>(this, "AHibernationManager.RetagStructureEntitiesTeam(int,int,int,int*)", OldTeam, NewTeam, RequireOwningPlayerID, OutAwakened); }
};
