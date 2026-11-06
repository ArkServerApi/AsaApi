#pragma once


//struct FHitResult
//{
//	int FaceIndex;
//	float Time;
//	float Distance;
//	UE::Math::TVector<double> Location;
//	UE::Math::TVector<double> ImpactPoint;
//	UE::Math::TVector<double> Normal;
//	UE::Math::TVector<double> ImpactNormal;
//	UE::Math::TVector<double> TraceStart;
//	UE::Math::TVector<double> TraceEnd;
//	float PenetrationDepth;
//	int MyItem;
//	int Item;
//	unsigned __int8 ElementIndex;
//	unsigned __int8 bBlockingHit : 1;
//	unsigned __int8 bStartPenetrating : 1;
//	unsigned __int32 bVolatileCollision : 1;
//	TWeakObjectPtr<UPhysicalMaterial> PhysMaterial;
//	FActorInstanceHandle HitObjectHandle;
//	TWeakObjectPtr<UPrimitiveComponent> Component;
//	FName BoneName;
//	FName MyBoneName;
//};

struct FHitResult
{
	// Fields

	int& FaceIndexField() { return *GetNativePointerField<int*>(this, "FHitResult.FaceIndex"); }
	float& TimeField() { return *GetNativePointerField<float*>(this, "FHitResult.Time"); }
	float& DistanceField() { return *GetNativePointerField<float*>(this, "FHitResult.Distance"); }
	FVector_NetQuantize& LocationField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.Location"); }
	FVector_NetQuantize& ImpactPointField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.ImpactPoint"); }
	FVector_NetQuantizeNormal& NormalField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "FHitResult.Normal"); }
	FVector_NetQuantizeNormal& ImpactNormalField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "FHitResult.ImpactNormal"); }
	FVector_NetQuantize& TraceStartField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.TraceStart"); }
	FVector_NetQuantize& TraceEndField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.TraceEnd"); }
	float& PenetrationDepthField() { return *GetNativePointerField<float*>(this, "FHitResult.PenetrationDepth"); }
	int& MyItemField() { return *GetNativePointerField<int*>(this, "FHitResult.MyItem"); }
	int& ItemField() { return *GetNativePointerField<int*>(this, "FHitResult.Item"); }
	TWeakObjectPtr<UPhysicalMaterial>& PhysMaterialField() { return *GetNativePointerField<TWeakObjectPtr<UPhysicalMaterial>*>(this, "FHitResult.PhysMaterial"); }
	FActorInstanceHandle& HitObjectHandleField() { return *GetNativePointerField<FActorInstanceHandle*>(this, "FHitResult.HitObjectHandle"); }
	TWeakObjectPtr<UPrimitiveComponent>& ComponentField() { return *GetNativePointerField<TWeakObjectPtr<UPrimitiveComponent>*>(this, "FHitResult.Component"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FHitResult.BoneName"); }
	FName& MyBoneNameField() { return *GetNativePointerField<FName*>(this, "FHitResult.MyBoneName"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bBlockingHit() { return { this, "FHitResult.bBlockingHit" }; }
	BitFieldValue<bool, unsigned __int32> bStartPenetrating() { return { this, "FHitResult.bStartPenetrating" }; }
	BitFieldValue<bool, unsigned __int32> bVolatileCollision() { return { this, "FHitResult.bVolatileCollision" }; }

	// Functions

// 	static FHitResult* GetReversedHit(FHitResult* result, const FHitResult* Hit) { return NativeCall<FHitResult*, FHitResult*, const FHitResult*>(nullptr, "FHitResult.GetReversedHit(FHitResult&)", result, Hit); }
// FUNCTION MISSING: FHitResult.GetReversedHit(FHitResult&)
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FHitResult>(); }
	bool NetSerialize(FArchive* Ar, UPackageMap* Map, bool* bOutSuccess) { return NativeCall<bool, FArchive*, UPackageMap*, bool*>(this, "FHitResult.NetSerialize(FArchive&,UPackageMap*,bool&)", Ar, Map, bOutSuccess); }
};