#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct APCGExSocketActor : public AActor
{
public:
	APCGExSocketActor() = delete;
	~APCGExSocketActor() = delete;
	APCGExSocketActor(const APCGExSocketActor&) = delete;
	APCGExSocketActor& operator=(const APCGExSocketActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APCGExSocketActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APCGExSocketActor"); }

	FName& SocketNameField() { return *GetNativePointerField<FName*>(this, "APCGExSocketActor.SocketName"); }
	FString& SocketTagField() { return *GetNativePointerField<FString*>(this, "APCGExSocketActor.SocketTag"); }
	bool& bStripFromExportField() { return *GetNativePointerField<bool*>(this, "APCGExSocketActor.bStripFromExport"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "APCGExSocketActor._getUObject()"); }
	FString* GetSocketTag_Implementation(FString* result) { return NativeCall<FString*, FString*>(this, "APCGExSocketActor.GetSocketTag_Implementation()", result); }
	bool ShouldStripFromExport_Implementation() { return NativeCall<bool>(this, "APCGExSocketActor.ShouldStripFromExport_Implementation()"); }
	FName GetSocketName_Implementation() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "APCGExSocketActor.GetSocketName_Implementation()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	UE::Math::TTransform<double>* GetSocketTransform_Implementation(UE::Math::TTransform<double>* result) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*>(this, "APCGExSocketActor.GetSocketTransform_Implementation()", result); }
};
