#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UDataLayerInstance.h"

class UDataLayerInstanceWithAsset : public UDataLayerInstance
{
public:
	UDataLayerInstanceWithAsset() = delete;
	~UDataLayerInstanceWithAsset() = delete;
	UDataLayerInstanceWithAsset(const UDataLayerInstanceWithAsset&) = delete;
	UDataLayerInstanceWithAsset& operator=(const UDataLayerInstanceWithAsset&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDataLayerInstanceWithAsset"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDataLayerInstanceWithAsset"); }
	bool IsServerOnly() { return NativeCall<bool>(this, "UDataLayerInstanceWithAsset.IsServerOnly()"); }
	const UDataLayerAsset* GetAsset() { return NativeCall<const UDataLayerAsset*>(this, "UDataLayerInstanceWithAsset.GetAsset()"); }
	FColor GetDebugColor() { using AsaReturnType = FColor; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UDataLayerInstanceWithAsset.GetDebugColor()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool IsClientOnly() { return NativeCall<bool>(this, "UDataLayerInstanceWithAsset.IsClientOnly()"); }
	FString* GetDataLayerFullName(FString* result) { return NativeCall<FString*, FString*>(this, "UDataLayerInstanceWithAsset.GetDataLayerFullName()", result); }
	FString* GetDataLayerShortName(FString* result) { return NativeCall<FString*, FString*>(this, "UDataLayerInstanceWithAsset.GetDataLayerShortName()", result); }
	UWorld* GetOuterWorld() { return NativeCall<UWorld*>(this, "UDataLayerInstanceWithAsset.GetOuterWorld()"); }
	bool IsRuntime() { return NativeCall<bool>(this, "UDataLayerInstanceWithAsset.IsRuntime()"); }
};
