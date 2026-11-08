#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UStaticMeshSocket : public UObject
{
public:
	UStaticMeshSocket() = delete;
	~UStaticMeshSocket() = delete;
	UStaticMeshSocket(const UStaticMeshSocket&) = delete;
	UStaticMeshSocket& operator=(const UStaticMeshSocket&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UStaticMeshSocket"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStaticMeshSocket"); }
	FName& SocketNameField() { return *GetNativePointerField<FName*>(this, "UStaticMeshSocket.SocketName"); }
	UE::Math::TVector<double>& RelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UStaticMeshSocket.RelativeLocation"); }
	UE::Math::TRotator<double>& RelativeRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UStaticMeshSocket.RelativeRotation"); }
	UE::Math::TVector<double>& RelativeScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UStaticMeshSocket.RelativeScale"); }
	FString& TagField() { return *GetNativePointerField<FString*>(this, "UStaticMeshSocket.Tag"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UStaticMeshSocket.Serialize(FArchive&)", Ar); }
};
