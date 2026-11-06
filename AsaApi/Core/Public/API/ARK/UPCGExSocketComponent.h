#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UPCGExSocketComponent : public USceneComponent
{
public:
	UPCGExSocketComponent() = delete;
	~UPCGExSocketComponent() = delete;
	UPCGExSocketComponent(const UPCGExSocketComponent&) = delete;
	UPCGExSocketComponent& operator=(const UPCGExSocketComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPCGExSocketComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPCGExSocketComponent"); }

	FName& SocketNameField() { return *GetNativePointerField<FName*>(this, "UPCGExSocketComponent.SocketName"); }
	FString& SocketTagField() { return *GetNativePointerField<FString*>(this, "UPCGExSocketComponent.SocketTag"); }
	bool& bStripFromExportField() { return *GetNativePointerField<bool*>(this, "UPCGExSocketComponent.bStripFromExport"); }
	FName GetSocketName_Implementation() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UPCGExSocketComponent.GetSocketName_Implementation()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	UE::Math::TTransform<double>* GetSocketTransform_Implementation(UE::Math::TTransform<double>* result) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*>(this, "UPCGExSocketComponent.GetSocketTransform_Implementation()", result); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UPCGExSocketComponent._getUObject()"); }
	FString* GetSocketTag_Implementation(FString* result) { return NativeCall<FString*, FString*>(this, "UPCGExSocketComponent.GetSocketTag_Implementation()", result); }
	bool ShouldStripFromExport_Implementation() { return NativeCall<bool>(this, "UPCGExSocketComponent.ShouldStripFromExport_Implementation()"); }
};
