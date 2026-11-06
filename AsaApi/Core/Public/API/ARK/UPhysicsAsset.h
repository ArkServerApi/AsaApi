#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UPhysicsAsset : public UObject
{
public:
	UPhysicsAsset() = delete;
	~UPhysicsAsset() = delete;
	UPhysicsAsset(const UPhysicsAsset&) = delete;
	UPhysicsAsset& operator=(const UPhysicsAsset&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPhysicsAsset"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPhysicsAsset"); }
	TArray<int, TSizedDefaultAllocator<32> >& BoundsBodiesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UPhysicsAsset.BoundsBodies"); }
	FPhysicsAssetSolverSettings& SolverSettingsField() { return *GetNativePointerField<FPhysicsAssetSolverSettings*>(this, "UPhysicsAsset.SolverSettings"); }
	FSolverIterations& SolverIterationsField() { return *GetNativePointerField<FSolverIterations*>(this, "UPhysicsAsset.SolverIterations"); }
	BitFieldValue<bool, unsigned char> bNotForDedicatedServer() { return { this, "UPhysicsAsset.bNotForDedicatedServer"}; }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "UPhysicsAsset.GetDesc()", result); }
	int FindBodyIndex(FName bodyName) { return NativeCall<int, FName>(this, "UPhysicsAsset.FindBodyIndex(FName)", bodyName); }
	int FindParentBodyIndex(const FReferenceSkeleton& RefSkeleton, int StartBoneIndex) { return NativeCall<int, const FReferenceSkeleton&, int>(this, "UPhysicsAsset.FindParentBodyIndex(FReferenceSkeleton&,int)", RefSkeleton, StartBoneIndex); }
	void DisableCollision(int BodyIndexA, int BodyIndexB) { NativeCall<void, int, int>(this, "UPhysicsAsset.DisableCollision(int,int)", BodyIndexA, BodyIndexB); }
	void PostLoad() { NativeCall<void>(this, "UPhysicsAsset.PostLoad()"); }
	FName FindConstraintBoneName(int ConstraintIndex) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, int>(this, "UPhysicsAsset.FindConstraintBoneName(int)", AsaReturnPointer, ConstraintIndex); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void BodyFindConstraints(int BodyIndex, TArray<int, TSizedDefaultAllocator<32> >& Constraints) { NativeCall<void, int, TArray<int, TSizedDefaultAllocator<32> >&>(this, "UPhysicsAsset.BodyFindConstraints(int,TArray<int,TSizedDefaultAllocator<32>>&)", BodyIndex, Constraints); }
	int FindConstraintIndex(FName Bone1Name, FName Bone2Name) { return NativeCall<int, FName, FName>(this, "UPhysicsAsset.FindConstraintIndex(FName,FName)", Bone1Name, Bone2Name); }
	int FindConstraintIndex(FName ConstraintName) { return NativeCall<int, FName>(this, "UPhysicsAsset.FindConstraintIndex(FName)", ConstraintName); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UPhysicsAsset.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UPhysicsAsset.Serialize(FArchive&)", Ar); }
	void GetBodyIndicesBelow(TArray<int, TSizedDefaultAllocator<32> >& OutBodyIndices, FName InBoneName, const FReferenceSkeleton& RefSkeleton, bool bIncludeParent) { NativeCall<void, TArray<int, TSizedDefaultAllocator<32> >&, FName, const FReferenceSkeleton&, bool>(this, "UPhysicsAsset.GetBodyIndicesBelow(TArray<int,TSizedDefaultAllocator<32>>&,FName,FReferenceSkeleton&,bool)", OutBodyIndices, InBoneName, RefSkeleton, bIncludeParent); }
	void GetBodyIndicesBelow(TArray<int, TSizedDefaultAllocator<32> >& OutBodyIndices, FName InBoneName, const USkeletalMesh* SkelMesh, bool bIncludeParent) { NativeCall<void, TArray<int, TSizedDefaultAllocator<32> >&, FName, const USkeletalMesh*, bool>(this, "UPhysicsAsset.GetBodyIndicesBelow(TArray<int,TSizedDefaultAllocator<32>>&,FName,USkeletalMesh*,bool)", OutBodyIndices, InBoneName, SkelMesh, bIncludeParent); }
};
