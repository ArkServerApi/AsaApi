#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class USkeletalMeshSocket : public UObject
{
public:
	USkeletalMeshSocket() = delete;
	~USkeletalMeshSocket() = delete;
	USkeletalMeshSocket(const USkeletalMeshSocket&) = delete;
	USkeletalMeshSocket& operator=(const USkeletalMeshSocket&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USkeletalMeshSocket"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USkeletalMeshSocket"); }
	FName& SocketNameField() { return *GetNativePointerField<FName*>(this, "USkeletalMeshSocket.SocketName"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "USkeletalMeshSocket.BoneName"); }
	UE::Math::TVector<double>& RelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkeletalMeshSocket.RelativeLocation"); }
	UE::Math::TRotator<double>& RelativeRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "USkeletalMeshSocket.RelativeRotation"); }
	UE::Math::TVector<double>& RelativeScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USkeletalMeshSocket.RelativeScale"); }
	BitFieldValue<bool, unsigned char> bForceAlwaysAnimated() { return { this, "USkeletalMeshSocket.bForceAlwaysAnimated"}; }
	BitFieldValue<bool, unsigned char> bIgnoreBoneScaling() { return { this, "USkeletalMeshSocket.bIgnoreBoneScaling"}; }
	BitFieldValue<bool, unsigned char> bRotateBoneScaleForSocket() { return { this, "USkeletalMeshSocket.bRotateBoneScaleForSocket"}; }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USkeletalMeshSocket.Serialize(FArchive&)", Ar); }
	void InitializeSocketFromLocation(const USkeletalMeshComponent* SkelComp, UE::Math::TVector<double>* WorldLocation, UE::Math::TVector<double>* WorldNormal) { if (!WorldLocation) throw std::invalid_argument("Null native value parameter"); if (!WorldNormal) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, const USkeletalMeshComponent *, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "USkeletalMeshSocket.InitializeSocketFromLocation(USkeletalMeshComponent*,UE::Math::TVector<double>,UE::Math::TVector<double>)", SkelComp, *WorldLocation, *WorldNormal); }
	UE::Math::TVector<double>* GetSocketLocation(UE::Math::TVector<double>* result, const USkeletalMeshComponent* SkelComp) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const USkeletalMeshComponent*>(this, "USkeletalMeshSocket.GetSocketLocation(USkeletalMeshComponent*)", result, SkelComp); }
	UE::Math::TTransform<double>* GetSocketLocalTransform(UE::Math::TTransform<double>* result) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*>(this, "USkeletalMeshSocket.GetSocketLocalTransform()", result); }
};
