#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UDataLayerInstance : public UObject
{
public:
	UDataLayerInstance() = delete;
	~UDataLayerInstance() = delete;
	UDataLayerInstance(const UDataLayerInstance&) = delete;
	UDataLayerInstance& operator=(const UDataLayerInstance&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDataLayerInstance"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDataLayerInstance"); }
	EDataLayerRuntimeState& InitialRuntimeStateField() { return *GetNativePointerField<EDataLayerRuntimeState*>(this, "UDataLayerInstance.InitialRuntimeState"); }
	bool CanHaveParentDataLayerInstance() { return NativeCall<bool>(this, "UDataLayerInstance.CanHaveParentDataLayerInstance()"); }
	bool IsServerOnly() { return NativeCall<bool>(this, "UDataLayerInstance.IsServerOnly()"); }
	EDataLayerRuntimeState GetRuntimeState() { return NativeCall<EDataLayerRuntimeState>(this, "UDataLayerInstance.GetRuntimeState()"); }
	bool IsRuntime() { return NativeCall<bool>(this, "UDataLayerInstance.IsRuntime()"); }
	FColor GetDebugColor() { using AsaReturnType = FColor; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UDataLayerInstance.GetDebugColor()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void PostLoad() { NativeCall<void>(this, "UDataLayerInstance.PostLoad()"); }
	bool CanHaveChildDataLayerInstance(const UDataLayerInstance* InChildDataLayerInstance) { return NativeCall<bool, const UDataLayerInstance*>(this, "UDataLayerInstance.CanHaveChildDataLayerInstance(UDataLayerInstance*)", InChildDataLayerInstance); }
	bool CanEditInitialRuntimeState() { return NativeCall<bool>(this, "UDataLayerInstance.CanEditInitialRuntimeState()"); }
	FName GetDataLayerFName() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UDataLayerInstance.GetDataLayerFName()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	FString* GetDataLayerShortName(FString* result) { return NativeCall<FString*, FString*>(this, "UDataLayerInstance.GetDataLayerShortName()", result); }
	bool IsClientOnly() { return NativeCall<bool>(this, "UDataLayerInstance.IsClientOnly()"); }
	const UDataLayerAsset* GetAsset() { return NativeCall<const UDataLayerAsset*>(this, "UDataLayerInstance.GetAsset()"); }
	UWorld* GetOuterWorld() { return NativeCall<UWorld*>(this, "UDataLayerInstance.GetOuterWorld()"); }
	FString* GetDataLayerFullName(FString* result) { return NativeCall<FString*, FString*>(this, "UDataLayerInstance.GetDataLayerFullName()", result); }
};
